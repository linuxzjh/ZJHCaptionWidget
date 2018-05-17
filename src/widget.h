#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include <QVBoxLayout>
#include "zjhcustommenu.h"
#include "zjhmenumanager.h"

namespace Ui {
class Widget;
}

#include "ColorDialogDll/include/ColorDialog.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    bool isEnableMenu(int menuID);
    bool isVisableMenu(int menuID);
    bool isExecMenu(int menuID);

    static bool _isEnableMenu(void *pOwner, int menuID)
    {
        Widget *widget = static_cast<Widget *>(pOwner);
        return widget->isEnableMenu(menuID);
    }
    static bool _isVisableMenu(void *pOwner, int menuID)
    {
        Widget *widget = static_cast<Widget *>(pOwner);
        return widget->isVisableMenu(menuID);
    }
    static bool _isExecMenu(void *pOwner, int menuID)
    {
        Widget *widget = static_cast<Widget *>(pOwner);
        return widget->isExecMenu(menuID);
    }

public slots:
    void OnStartMenuClicked();
    void OnProgramMenuClicked();
    void OnResourceMenuClicked();
    void OnSettingMenuClicked();
private:
    Ui::Widget *ui;
    QButtonGroup *btnGroup;
    ColorDialog *_pColorDlg;
	QVBoxLayout *_vlayout;
};

#endif // WIDGET_H
