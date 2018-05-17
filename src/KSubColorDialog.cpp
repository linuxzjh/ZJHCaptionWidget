#include "KSubColorDialog.h"
#include <QPushButton>
#include <QLabel>
#include <QDebug>

#pragma execution_character_set("utf-8")

KSubColorDialog::KSubColorDialog(QWidget *parent)
    :QColorDialog(parent)
{
    modifyBtnName();
    modifyLabelName();
    this->setWindowTitle(QString::fromLocal8Bit("选择颜色"));
}

void KSubColorDialog::modifyBtnName()
{
    QList<QPushButton *> btnList = this->findChildren<QPushButton *>();
    QString textName = "";
    foreach (QPushButton *btn, btnList) {
        textName = btn->text();
       qDebug() << btn->text();
       if ("OK" == textName)
       {
           btn->setText(tr("确定"));
       }
       else if ("Cancel" == textName)
       {
           btn->setText(tr("取消"));
       }
       else if ("&Pick Screen Color" == textName)
       {
           btn->setText(tr("获取屏幕颜色(&P)"));
       }
       else if ("&Add to Custom Colors" == textName)
       {
           btn->setText(tr("添加到自定义颜色(&A)"));
       }
    }
}

void KSubColorDialog::modifyLabelName()
{
    QList<QLabel *> labelList = this->findChildren<QLabel *>();
    QString textName = "";
    foreach (QLabel *label, labelList) {
        textName = label->text();
       qDebug() << textName;
       if ("&Basic colors" == textName)
       {
           label->setText(tr("基本颜色(&B)"));
       }
       else if ("&Custom colors" == textName)
       {
           label->setText(tr("自定义颜色(&C)"));
       }
       else if ("Hu&e:" == textName)
       {
           label->setText(tr("色调(&E):"));
       }
       else if ("&Sat:" == textName)
       {
           label->setText(tr("饱和度(&S):"));
       }
       else if ("&Val:" == textName)
       {
           label->setText(tr("亮度(&V):"));
       }
       else if ("&Red:" == textName)
       {
           label->setText(tr("红色(&R):"));
       }
       else if ("&Green:" == textName)
       {
           label->setText(tr("绿色(&G):"));
       }
       else if ("Bl&ue:" == textName)
       {
           label->setText(tr("蓝色(&U):"));
       }
       else if ("A&lpha channel:" == textName)
       {
           label->setText(tr("Alpha通道(&A):"));
       }
       else if ("&HTML:" == textName)
       {
           label->setText(tr("&HTML:"));
       }
    }
}
