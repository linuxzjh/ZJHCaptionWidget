#include "zjhmenumanager.h"

QMenu* ZJHMenuManager::createMenu(pEnableFun enableFun, pVisibleFun visibleFun, pExecFun execFun, void *pOwner, QWidget *parent)
{
    ZJHCustomMenu *customStartMenu  = new ZJHCustomMenu(tr("文件"), MENU_FILE_SECTION, enableFun, visibleFun, execFun, pOwner, parent);
    customStartMenu->addCustomMenuAction(MENU_FILE_SECTION, MENU_FILE_NEWPROJ, 1, tr("新建工程"), "ctrl + n", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_SECTION, MENU_FILE_OPENPROJ, 1, tr("打开工程"), "ctrl + o", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_SECTION, MENU_FILE_RECOPENPROJ, 0, tr("最近打开工程"), "", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_RECOPENPROJ, MENU_FILE_RECOPENPROJ1, 1, tr("工程1.zjh"), "", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_RECOPENPROJ, MENU_FILE_RECOPENPROJ2, 1, tr("工程2.zjh"), "", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_RECOPENPROJ, MENU_FILE_RECOPENPROJ3, 1, tr("工程3.zjh"), "", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_SECTION, MENU_FILE_CLOSEPROJ, 1, tr("关闭工程"), "ctrl + c", "");
    customStartMenu->addCustomMenuAction(MENU_FILE_SECTION, MENU_FILE_SAVEPROJ, 1, tr("保存工程"), "ctrl + s", "");
    return customStartMenu;
}
