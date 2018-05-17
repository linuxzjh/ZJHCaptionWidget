#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include "KSubColorDialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
  , _pColorDlg(nullptr)
{
    ui->setupUi(this);

    connect(ui->btn_startMenu, SIGNAL(clicked()), this, SLOT(OnStartMenuClicked()));
    connect(ui->btn_programMenu, SIGNAL(clicked()), this, SLOT(OnProgramMenuClicked()));
    connect(ui->btn_resourceMenu, SIGNAL(clicked()), this, SLOT(OnResourceMenuClicked()));
    connect(ui->btn_settingMenu, SIGNAL(clicked()), this, SLOT(OnSettingMenuClicked()));

    _vlayout = new QVBoxLayout;
    QPushButton *btn1 = new QPushButton(tr("工程1"), ui->scrollAreaWidgetContents);
    QPushButton *btn2 = new QPushButton(tr("工程2"), ui->scrollAreaWidgetContents);
    QPushButton *btn3 = new QPushButton(tr("工程3"), ui->scrollAreaWidgetContents);

    btn1->setFixedHeight(200);
    btn2->setFixedHeight(200);
    btn3->setFixedHeight(300);

    btnGroup = new QButtonGroup(this);
    btnGroup->addButton(btn1, MENU_FILE_RECOPENPROJ1);
    btnGroup->addButton(btn2, MENU_FILE_RECOPENPROJ2);
    btnGroup->addButton(btn3, MENU_FILE_RECOPENPROJ3);

    _vlayout->addWidget(btn1);
    _vlayout->addWidget(btn2);
    _vlayout->addWidget(btn3);
    ui->scrollAreaWidgetContents->setLayout(_vlayout);
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::isEnableMenu(int menuID)
{
    switch (menuID) {
    case MENU_FILE_OPENPROJ:
        return false;
        break;
    default:
        break;
    }
    return true;
}

bool Widget::isVisableMenu(int menuID)
{
    return true;
}

bool Widget::isExecMenu(int menuID)
{
    switch (menuID) {
    case MENU_FILE_NEWPROJ:
        QMessageBox::information(this, tr("新建工程"), tr("新建工程"), QMessageBox::Ok);
        break;
    case MENU_FILE_RECOPENPROJ1:
        ui->scrollArea->ensureWidgetVisible(btnGroup->button(MENU_FILE_RECOPENPROJ1));
        break;
    case MENU_FILE_RECOPENPROJ2:
        ui->scrollArea->ensureWidgetVisible(btnGroup->button(MENU_FILE_RECOPENPROJ2));
        break;
    case MENU_FILE_RECOPENPROJ3:
        ui->scrollArea->ensureWidgetVisible(btnGroup->button(MENU_FILE_RECOPENPROJ3));
        break;
    default:
        break;
    }
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
    QColorDialog colorDialog;
    colorDialog.setOption(QColorDialog::DontUseNativeDialog, false);
    colorDialog.exec();
}

void Widget::OnResourceMenuClicked()
{
//    if(_pColorDlg == NULL)
//    {
//        _pColorDlg = new ColorDialog(this);
//		//_pColorDlg->setMinimumSize(500, 500);
//		_vlayout->addWidget(_pColorDlg);
//		//_pColorDlg->show();
//		QColor color = _pColorDlg->getColor();
//		QRgb rgb = _pColorDlg->getRgb();
//    }
}

void Widget::OnSettingMenuClicked()
{
    KSubColorDialog colorDialog;
    colorDialog.exec();
}
