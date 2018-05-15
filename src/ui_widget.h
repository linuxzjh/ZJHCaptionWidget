/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_startMenu;
    QPushButton *btn_resourceMenu;
    QPushButton *btn_programMenu;
    QPushButton *btn_settingMenu;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_startMenu = new QPushButton(Widget);
        btn_startMenu->setObjectName(QStringLiteral("btn_startMenu"));
        btn_startMenu->setStyleSheet(QLatin1String("background-color: rgb(52, 58, 72); \n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(btn_startMenu);

        btn_resourceMenu = new QPushButton(Widget);
        btn_resourceMenu->setObjectName(QStringLiteral("btn_resourceMenu"));

        horizontalLayout->addWidget(btn_resourceMenu);

        btn_programMenu = new QPushButton(Widget);
        btn_programMenu->setObjectName(QStringLiteral("btn_programMenu"));

        horizontalLayout->addWidget(btn_programMenu);

        btn_settingMenu = new QPushButton(Widget);
        btn_settingMenu->setObjectName(QStringLiteral("btn_settingMenu"));

        horizontalLayout->addWidget(btn_settingMenu);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 361, 247));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn_startMenu->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        btn_resourceMenu->setText(QApplication::translate("Widget", "\350\265\204\346\272\220", Q_NULLPTR));
        btn_programMenu->setText(QApplication::translate("Widget", "\350\212\202\347\233\256", Q_NULLPTR));
        btn_settingMenu->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
