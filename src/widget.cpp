#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->btn_startMenu, SIGNAL(clicked()), this, SLOT(OnStartMenuClicked()));
    connect(ui->btn_programMenu, SIGNAL(clicked()), this, SLOT(OnProgramMenuClicked()));
    connect(ui->btn_resourceMenu, SIGNAL(clicked()), this, SLOT(OnResourceMenuClicked()));
    connect(ui->btn_settingMenu, SIGNAL(clicked()), this, SLOT(OnSettingMenuClicked()));
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::isEnableMenu(int menuID)
{
    return true;
}

bool Widget::isVisableMenu(int menuID)
{
    return true;
}

bool Widget::isExecMenu(int menuID)
{
    return true;
}

void Widget::OnStartMenuClicked()
{
    QPushButton *starBtn = static_cast<QPushButton *>(sender());
    ZJHCustomMenu *customMenu = nullptr;
    customMenu = static_cast<ZJHCustomMenu *>( ZJHSINGLETON(ZJHMenuManager)->createMenu(Widget::_isEnableMenu, Widget::_isVisableMenu, Widget::_isExecMenu, this, this) );
    QPoint point = mapToGlobal(starBtn->pos());
    customMenu->exec(QPoint(point.x(), point.y()  + starBtn->height()) );

    delete customMenu;
    customMenu = nullptr;
}

void Widget::OnProgramMenuClicked()
{

}

void Widget::OnResourceMenuClicked()
{

}

void Widget::OnSettingMenuClicked()
{

}
