#include "src/widget.h"
#include <QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translatorQt;
    //bool bLoad = translatorQt.load("qt_zh_CN.qm", "E:\\zjh\\Qt_Project\\ZJHCaptionWidget");
    a.installTranslator(&translatorQt);

    Widget w;
    w.show();

    return a.exec();
}
