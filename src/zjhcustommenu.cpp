#include "zjhcustommenu.h"

ZJHCustomMenu::ZJHCustomMenu(const QString &menuName, int id, pEnableFun enableFun, pVisibleFun visibleFun, pExecFun execFun, void *pOwner, QWidget *parent)
    :QMenu(parent)
    ,   _pfEnabled(enableFun)
    ,   _pfVisiabled(visibleFun)
    ,   _pfExec(execFun)
    ,   _pOwner(pOwner)
{
    QSharedPointer<menuCorrelateInfo> spRootItemInfo = QSharedPointer<menuCorrelateInfo>(new menuCorrelateInfo);
    spRootItemInfo->_id = id;
    spRootItemInfo->_name = menuName;
    spRootItemInfo->_pAction = this->menuAction(); //自身Action
    spRootItemInfo->_pOWner = _pOwner;             //parent
    spRootItemInfo->_type = 0;
    _menuId2MenuCorrelateInfoMap.insert(id, spRootItemInfo);
}

bool ZJHCustomMenu::addCustomMenuAction(int iParentID, int id, int type, const QString &name, const QString &shortcut, const QString icon, bool bCheckable)
{
    if (_menuId2MenuCorrelateInfoMap.find(id) != _menuId2MenuCorrelateInfoMap.end()) return false;

    QSharedPointer<menuCorrelateInfo> spRootItemInfo = QSharedPointer<menuCorrelateInfo>(new menuCorrelateInfo);
    spRootItemInfo->_id = id;
    spRootItemInfo->_name = name;
    spRootItemInfo->_pOWner = _pOwner;
    spRootItemInfo->_type = type;

    if (!_pfVisiabled || _pfVisiabled(_pOwner, id))
    {
        if (0 == type)
        {
            QMenu *menu = this->addMenu(name);
            spRootItemInfo->_pAction = menu->menuAction();
            spRootItemInfo->_pAction->setIcon(QIcon(icon));
        }
        else
        {
            QMap<int, QSharedPointer<menuCorrelateInfo>>::iterator parentIt = _menuId2MenuCorrelateInfoMap.find(iParentID);
            if (parentIt != _menuId2MenuCorrelateInfoMap.end() && (parentIt.value()->_type == 0))
            {
                QAction *parentAction = parentIt.value()->_pAction;
                QMenu *parentMenu = parentAction->menu();
                QAction  *action = parentMenu->addAction(name);
                spRootItemInfo->_pAction = action;
                if (! shortcut.isEmpty())
                {
                    action->setShortcut(QKeySequence(shortcut));
                }
                action->setData(id);
                action->setCheckable(bCheckable);
                if (!icon.isEmpty())
                {
                    spRootItemInfo->_icon = icon;
                    action->setIcon(QIcon(icon));
                }
            }
        }
    }

    _menuId2MenuCorrelateInfoMap.insert(id, spRootItemInfo);
    return true;
}
