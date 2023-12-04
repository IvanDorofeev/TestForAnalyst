#include "mainwindow.h"

#include <QApplication>
#include "tester.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.resize(1000, 1000);

    Tester tester;
    tester.addPushBackVectorStat();
    tester.showPushBackVectorStat();

    tester.addPushBeginVectorStat();
    tester.showPushBeginVectorStat();

    tester.addPushMiddleVectorStat();
    tester.showPushMiddleVectorStat();


    tester.addPushBackListStat();
    tester.showPushBackListStat();

    tester.addPushBeginListStat();
    tester.showPushBeginListStat();

    tester.addPushMiddleListStat();
    tester.showPushMiddleListStat();


    tester.addPushBackDequeStat();
    tester.showPushBackDequeStat();

    tester.addPushBeginDequeStat();
    tester.showPushBeginDequeStat();

    tester.addPushMiddleDequeStat();
    tester.showPushMiddleDequeStat();

    tester.addSortVectorStat();
    tester.showSortVectorStat();

    tester.addSortListStat();
    tester.showSortListStat();

    tester.addAccessVectorStat();
    tester.showAccessVectorStat();

    tester.addAccessListStat();
    tester.showAccessListStat();

    tester.addAccessMapStat();
    tester.showAccessMapStat();
    // w.show();
    return a.exec();
}
