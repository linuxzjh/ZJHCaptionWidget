#ifndef ZJHCUSTOMMENU_H
#define ZJHCUSTOMMENU_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QMap>

/*!
 *每个Action(menu)所附加的其他信息;
*/
typedef struct _menuCorrelateInfo
{
    int _id;
    bool _type;         // 0 menu, 1 action.
    QString _name;
    QString _icon;      //图片路径
    QAction *_pAction; //当前元素Action,如果为Menu，这保存Menu的Action.
    void *_pOWner;     //该Action所属窗口.

    _menuCorrelateInfo()
    {
        _id = 0;
        _type = 0;
        _name = "";
        _icon = "";
        _pAction = nullptr;
        _pOWner = nullptr;
    }
} menuCorrelateInfo;

typedef bool (*pEnableFun)(void *pOwner, int menuID);

typedef bool (*pVisibleFun)(void *pOwner, int menuID);

typedef bool (*pExecFun)(void *pOwner, int menuID);


class ZJHCustomMenu : public QMenu
{
    Q_OBJECT
public:
    ZJHCustomMenu(const QString &menuName, int id, pEnableFun enableFun, pVisibleFun visibleFun, pExecFun execFun, void *pOwner, QWidget *parent = nullptr);
    bool addCustomMenuAction(int iParentID, int id, int type, const QString& name, const QString &shortcut = "", const QString icon = "", bool bCheckable = false);
public slots:
    void On_Triggered(QAction* action);
protected:
    void showEvent(QShowEvent *event);
private:
    QMap<int, QSharedPointer<menuCorrelateInfo>> _menuId2MenuCorrelateInfoMap;

    pEnableFun	_pfEnabled;
    pVisibleFun	_pfVisiabled;
    pExecFun	_pfExec;
    void*		_pOwner;
};

#endif // ZJHCUSTOMMENU_H
