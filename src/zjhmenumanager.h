#ifndef ZJHMENUMANAGER_H
#define ZJHMENUMANAGER_H

#include <QObject>
#include <QMenu>
#include "zjhsingle.h"
#include "zjhcustommenu.h"
#include "actiondefine.h"

class ZJHMenuManager : public QObject
{
    Q_OBJECT
    DECLARESINGLETON(ZJHMenuManager)
public:
        QMenu* createMenu(pEnableFun enableFun, pVisibleFun visibleFun, pExecFun execFun, void *pOwner, QWidget *parent);
signals:
public slots:
private:
};

#endif // ZJHMENUMANAGER_H
