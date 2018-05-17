/********************************************************************************
** Form generated from reading UI file 'ColorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDIALOG_H
#define UI_COLORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "basiccolorarea.h"
#include "customcolorarea.h"
#include "hcolorarea.h"
#include "previewcolorarea.h"
#include "svcolorarea.h"

QT_BEGIN_NAMESPACE

class Ui_ColorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mainWgt;
    QGroupBox *basicGroup;
    QHBoxLayout *horizontalLayout;
    BasicColorArea *basicColorWgt;
    QGroupBox *customGroup;
    QHBoxLayout *horizontalLayout_2;
    CustomColorArea *customColorWgt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *colorEdit;
    QPushButton *addCustomColorBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    SVColorArea *svColorWgt;
    HColorArea *hColorWgt;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *curColorLbl;
    PreviewColorArea *previewWgt;
    QLabel *newColorLbl;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *hLabel;
    QSpinBox *hSpinBox;
    QLabel *sLabel;
    QSpinBox *sSpinBox;
    QLabel *vLabel;
    QSpinBox *vSpinBox;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_2;
    QLabel *rLabel;
    QSpinBox *rSpinBox;
    QLabel *gLabel;
    QSpinBox *gSpinBox;
    QLabel *bLabel;
    QSpinBox *bSpinBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *ColorDialog)
    {
        if (ColorDialog->objectName().isEmpty())
            ColorDialog->setObjectName(QStringLiteral("ColorDialog"));
        ColorDialog->resize(713, 368);
        ColorDialog->setStyleSheet(QString::fromUtf8("/*\344\270\273\347\225\214\351\235\242\346\240\267\345\274\217\350\241\250*/\n"
"QWidget\n"
"{\n"
"	border:none;\n"
"	color:white;\n"
"	font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	font-size:14px;\n"
"	outline:0px;\n"
"	background:transparent;\n"
"}\n"
"\n"
"#topWgt\n"
"{\n"
"	border-image:url(F:/data/images/mainui/bg.png) 4 4 4 4 stretch stretch;\n"
"	border-width:4 4 4 4;\n"
"}\n"
"\n"
"/*\n"
"\344\270\273\344\275\223\350\203\214\346\231\257\n"
"*/\n"
"#mainWgt\n"
"{\n"
"	border-image:url(F:/data/images/mainui/main.png) 4 4 4 4 stretch stretch;\n"
"	border-width:4 4 4 4;\n"
"}\n"
"QLineEdit\n"
"{\n"
"	background:#25272b;\n"
"	border:1px solid #276d94;\n"
"	padding-left:5px;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	border:2px solid #276d94;\n"
"	margin-top:10px;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"	left:10px;\n"
"	bottom:10px;\n"
"}\n"
"\n"
"/*1-\346\214\211\351\222\256\345\274\200\345\247\213*/\n"
"QPushButton\n"
"{\n"
"	background:#b82525;\n"
"	border-radius:3px;\n"
"	padding-top:-2px;\n"
""
                        "}\n"
"QPushButton:hover\n"
"{\n"
"	background:#d4352d;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background:#ab2922;\n"
"}\n"
"/*1-\346\214\211\351\222\256\347\273\223\346\235\237*/\n"
"\n"
"QSpinBox\n"
"{\n"
"	border:1px solid #276d94;\n"
"	background-color:#25272b;\n"
"	min-height: 26px;\n"
"	min-width: 70px;\n"
"}\n"
"QSpinBox::up-arrow\n"
"{\n"
"	border-left:8px solid #25272b;\n"
"	border-right:8px solid #25272b;\n"
"	border-bottom:8px solid #276d94;\n"
"	width:0px;\n"
"	height: 0px;\n"
"}\n"
"QSpinBox::up-arrow:pressed\n"
"{\n"
"	border-bottom:9px solid #81c3d7;\n"
"}\n"
"QSpinBox::up-button\n"
"{\n"
"	margin-right:4px;\n"
"	min-width: 16px;\n"
"	min-height: 13px;\n"
"	background-color:#25272b;\n"
"}\n"
"QSpinBox::down-arrow\n"
"{\n"
"	border-left:8px solid #25272b;\n"
"	border-right:8px solid #25272b;\n"
"	border-top:8px solid #276d94;\n"
"	width:0px;\n"
"	height: 0px;\n"
"}\n"
"QSpinBox::down-arrow:pressed\n"
"{\n"
"	border-top:9px solid #81c3d7;\n"
"}\n"
"QSpinBox::down-button\n"
"{\n"
"	margin-right:4p"
                        "x;\n"
"	min-width:16px;\n"
"	min-height:13px;\n"
"	background-color:#25272b;\n"
"}\n"
"\n"
"#m_pCloseBtn\n"
"{\n"
"	background:transparent;\n"
"	border-image:url(F:/data/images/mainui/close.png);\n"
"}\n"
"\n"
"#m_pCloseBtn:hover\n"
"{\n"
"	border-image:url(F:/data/images/mainui/close-H.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(ColorDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainWgt = new QWidget(ColorDialog);
        mainWgt->setObjectName(QStringLiteral("mainWgt"));
        basicGroup = new QGroupBox(mainWgt);
        basicGroup->setObjectName(QStringLiteral("basicGroup"));
        basicGroup->setGeometry(QRect(12, 5, 228, 216));
        horizontalLayout = new QHBoxLayout(basicGroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 10, 5, 1);
        basicColorWgt = new BasicColorArea(basicGroup);
        basicColorWgt->setObjectName(QStringLiteral("basicColorWgt"));
        basicColorWgt->setMinimumSize(QSize(214, 191));
        basicColorWgt->setMaximumSize(QSize(214, 191));

        horizontalLayout->addWidget(basicColorWgt);

        customGroup = new QGroupBox(mainWgt);
        customGroup->setObjectName(QStringLiteral("customGroup"));
        customGroup->setGeometry(QRect(12, 232, 228, 81));
        horizontalLayout_2 = new QHBoxLayout(customGroup);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 10, 5, 5);
        customColorWgt = new CustomColorArea(customGroup);
        customColorWgt->setObjectName(QStringLiteral("customColorWgt"));
        customColorWgt->setMinimumSize(QSize(214, 52));
        customColorWgt->setMaximumSize(QSize(214, 52));

        horizontalLayout_2->addWidget(customColorWgt);

        layoutWidget = new QWidget(mainWgt);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(17, 327, 220, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(12, 26));
        label->setMaximumSize(QSize(12, 26));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        colorEdit = new QLineEdit(layoutWidget);
        colorEdit->setObjectName(QStringLiteral("colorEdit"));
        colorEdit->setMinimumSize(QSize(72, 26));
        colorEdit->setMaximumSize(QSize(72, 26));

        horizontalLayout_3->addWidget(colorEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        addCustomColorBtn = new QPushButton(layoutWidget);
        addCustomColorBtn->setObjectName(QStringLiteral("addCustomColorBtn"));
        addCustomColorBtn->setMinimumSize(QSize(0, 26));
        addCustomColorBtn->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_4->addWidget(addCustomColorBtn);

        layoutWidget1 = new QWidget(mainWgt);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(253, 7, 301, 272));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        svColorWgt = new SVColorArea(layoutWidget1);
        svColorWgt->setObjectName(QStringLiteral("svColorWgt"));
        svColorWgt->setMinimumSize(QSize(256, 256));
        svColorWgt->setMaximumSize(QSize(256, 256));

        horizontalLayout_5->addWidget(svColorWgt);

        hColorWgt = new HColorArea(layoutWidget1);
        hColorWgt->setObjectName(QStringLiteral("hColorWgt"));
        hColorWgt->setMinimumSize(QSize(34, 270));
        hColorWgt->setMaximumSize(QSize(34, 270));

        horizontalLayout_5->addWidget(hColorWgt);

        layoutWidget2 = new QWidget(mainWgt);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(266, 283, 240, 70));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        curColorLbl = new QLabel(layoutWidget2);
        curColorLbl->setObjectName(QStringLiteral("curColorLbl"));
        curColorLbl->setMinimumSize(QSize(30, 40));
        curColorLbl->setMaximumSize(QSize(30, 40));
        curColorLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        curColorLbl->setWordWrap(true);

        horizontalLayout_6->addWidget(curColorLbl);

        previewWgt = new PreviewColorArea(layoutWidget2);
        previewWgt->setObjectName(QStringLiteral("previewWgt"));
        previewWgt->setMinimumSize(QSize(166, 68));
        previewWgt->setMaximumSize(QSize(166, 68));

        horizontalLayout_6->addWidget(previewWgt);

        newColorLbl = new QLabel(layoutWidget2);
        newColorLbl->setObjectName(QStringLiteral("newColorLbl"));
        newColorLbl->setMinimumSize(QSize(30, 40));
        newColorLbl->setMaximumSize(QSize(30, 40));
        newColorLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        newColorLbl->setWordWrap(true);

        horizontalLayout_6->addWidget(newColorLbl);

        layoutWidget3 = new QWidget(mainWgt);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(557, 25, 146, 110));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hLabel = new QLabel(layoutWidget3);
        hLabel->setObjectName(QStringLiteral("hLabel"));
        hLabel->setMinimumSize(QSize(66, 26));
        hLabel->setMaximumSize(QSize(66, 26));
        hLabel->setScaledContents(false);
        hLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(hLabel, 0, 0, 1, 1);

        hSpinBox = new QSpinBox(layoutWidget3);
        hSpinBox->setObjectName(QStringLiteral("hSpinBox"));
        hSpinBox->setMinimumSize(QSize(72, 28));
        hSpinBox->setMaximumSize(QSize(70, 26));
        hSpinBox->setAccelerated(true);
        hSpinBox->setMaximum(360);

        gridLayout->addWidget(hSpinBox, 0, 1, 1, 1);

        sLabel = new QLabel(layoutWidget3);
        sLabel->setObjectName(QStringLiteral("sLabel"));
        sLabel->setMinimumSize(QSize(66, 26));
        sLabel->setMaximumSize(QSize(66, 26));
        sLabel->setScaledContents(false);
        sLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sLabel, 1, 0, 1, 1);

        sSpinBox = new QSpinBox(layoutWidget3);
        sSpinBox->setObjectName(QStringLiteral("sSpinBox"));
        sSpinBox->setMinimumSize(QSize(72, 28));
        sSpinBox->setMaximumSize(QSize(70, 26));
        sSpinBox->setAccelerated(true);
        sSpinBox->setMaximum(255);

        gridLayout->addWidget(sSpinBox, 1, 1, 1, 1);

        vLabel = new QLabel(layoutWidget3);
        vLabel->setObjectName(QStringLiteral("vLabel"));
        vLabel->setMinimumSize(QSize(66, 26));
        vLabel->setMaximumSize(QSize(66, 26));
        vLabel->setScaledContents(false);
        vLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(vLabel, 2, 0, 1, 1);

        vSpinBox = new QSpinBox(layoutWidget3);
        vSpinBox->setObjectName(QStringLiteral("vSpinBox"));
        vSpinBox->setMinimumSize(QSize(72, 28));
        vSpinBox->setMaximumSize(QSize(70, 26));
        vSpinBox->setAccelerated(true);
        vSpinBox->setMaximum(255);

        gridLayout->addWidget(vSpinBox, 2, 1, 1, 1);

        layoutWidget4 = new QWidget(mainWgt);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(558, 153, 146, 110));
        gridLayout_2 = new QGridLayout(layoutWidget4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(12);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rLabel = new QLabel(layoutWidget4);
        rLabel->setObjectName(QStringLiteral("rLabel"));
        rLabel->setMinimumSize(QSize(66, 26));
        rLabel->setMaximumSize(QSize(66, 26));
        rLabel->setScaledContents(false);
        rLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(rLabel, 0, 0, 1, 1);

        rSpinBox = new QSpinBox(layoutWidget4);
        rSpinBox->setObjectName(QStringLiteral("rSpinBox"));
        rSpinBox->setMinimumSize(QSize(72, 28));
        rSpinBox->setMaximumSize(QSize(70, 26));
        rSpinBox->setAccelerated(true);
        rSpinBox->setMaximum(255);

        gridLayout_2->addWidget(rSpinBox, 0, 1, 1, 1);

        gLabel = new QLabel(layoutWidget4);
        gLabel->setObjectName(QStringLiteral("gLabel"));
        gLabel->setMinimumSize(QSize(66, 26));
        gLabel->setMaximumSize(QSize(66, 26));
        gLabel->setScaledContents(false);
        gLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(gLabel, 1, 0, 1, 1);

        gSpinBox = new QSpinBox(layoutWidget4);
        gSpinBox->setObjectName(QStringLiteral("gSpinBox"));
        gSpinBox->setMinimumSize(QSize(72, 28));
        gSpinBox->setMaximumSize(QSize(70, 26));
        gSpinBox->setAccelerated(true);
        gSpinBox->setMaximum(255);

        gridLayout_2->addWidget(gSpinBox, 1, 1, 1, 1);

        bLabel = new QLabel(layoutWidget4);
        bLabel->setObjectName(QStringLiteral("bLabel"));
        bLabel->setMinimumSize(QSize(66, 26));
        bLabel->setMaximumSize(QSize(66, 26));
        bLabel->setScaledContents(false);
        bLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(bLabel, 2, 0, 1, 1);

        bSpinBox = new QSpinBox(layoutWidget4);
        bSpinBox->setObjectName(QStringLiteral("bSpinBox"));
        bSpinBox->setMinimumSize(QSize(72, 28));
        bSpinBox->setMaximumSize(QSize(70, 26));
        bSpinBox->setAccelerated(true);
        bSpinBox->setMaximum(255);

        gridLayout_2->addWidget(bSpinBox, 2, 1, 1, 1);

        layoutWidget5 = new QWidget(mainWgt);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(558, 310, 138, 28));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        okBtn = new QPushButton(layoutWidget5);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setMinimumSize(QSize(62, 26));
        okBtn->setMaximumSize(QSize(62, 26));

        horizontalLayout_7->addWidget(okBtn);

        cancelBtn = new QPushButton(layoutWidget5);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(62, 26));
        cancelBtn->setMaximumSize(QSize(62, 26));

        horizontalLayout_7->addWidget(cancelBtn);


        verticalLayout->addWidget(mainWgt);


        retranslateUi(ColorDialog);

        QMetaObject::connectSlotsByName(ColorDialog);
    } // setupUi

    void retranslateUi(QWidget *ColorDialog)
    {
        ColorDialog->setWindowTitle(QApplication::translate("ColorDialog", "ColorDialog", Q_NULLPTR));
        basicGroup->setTitle(QApplication::translate("ColorDialog", "\345\237\272\346\234\254\351\242\234\350\211\262", Q_NULLPTR));
        customGroup->setTitle(QApplication::translate("ColorDialog", "\350\207\252\345\256\232\344\271\211\351\242\234\350\211\262", Q_NULLPTR));
        label->setText(QApplication::translate("ColorDialog", "#", Q_NULLPTR));
        addCustomColorBtn->setText(QApplication::translate("ColorDialog", "\346\267\273\345\212\240\345\210\260\350\207\252\345\256\232\344\271\211\351\242\234\350\211\262", Q_NULLPTR));
        curColorLbl->setText(QApplication::translate("ColorDialog", "\345\275\223\345\211\215\351\242\234\350\211\262", Q_NULLPTR));
        newColorLbl->setText(QApplication::translate("ColorDialog", "\346\226\260\347\232\204\351\242\234\350\211\262", Q_NULLPTR));
        hLabel->setText(QApplication::translate("ColorDialog", "\350\211\262\350\260\203(H):", Q_NULLPTR));
        hSpinBox->setSuffix(QApplication::translate("ColorDialog", "\345\272\246", Q_NULLPTR));
        sLabel->setText(QApplication::translate("ColorDialog", "\351\245\261\345\222\214\345\272\246(S):", Q_NULLPTR));
        vLabel->setText(QApplication::translate("ColorDialog", "\344\272\256\345\272\246(V):", Q_NULLPTR));
        rLabel->setText(QApplication::translate("ColorDialog", "\347\272\242(R):", Q_NULLPTR));
        gLabel->setText(QApplication::translate("ColorDialog", "\347\273\277(G):", Q_NULLPTR));
        bLabel->setText(QApplication::translate("ColorDialog", "\350\223\235(B):", Q_NULLPTR));
        okBtn->setText(QApplication::translate("ColorDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("ColorDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorDialog: public Ui_ColorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDIALOG_H
