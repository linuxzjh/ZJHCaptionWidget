#ifndef KSUBCOLORDIALOG_H
#define KSUBCOLORDIALOG_H

#include <QColorDialog>

class KSubColorDialog : public QColorDialog
{
public:
    KSubColorDialog(QWidget *parent = nullptr);
private:
    void modifyBtnName();
    void modifyLabelName();
};

#endif // KSUBCOLORDIALOG_H
