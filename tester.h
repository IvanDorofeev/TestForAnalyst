#ifndef TESTER_H
#define TESTER_H

#include <chrono>
#include <deque>
#include <QRandomGenerator>
#include "analyst.h"

/* Class for testing library Analyst */
class Tester
{
    /* Property for accumulate statistics */
    Analyst *analyst;
public:
    Tester();
    Tester(Analyst *analyst);
    Tester(const Tester& obj);
    ~Tester();

    /* Methods which call addNewStatistics and showStatistics for different methods of standard containers
     * They test on arrays from 500 to 10000 with random values and indexes in containers */
    void addPushBackVectorStat();
    void showPushBackVectorStat();

    void addPushBeginVectorStat();
    void showPushBeginVectorStat();

    void addPushMiddleVectorStat();
    void showPushMiddleVectorStat();

    void addPushBackListStat();
    void showPushBackListStat();

    void addPushBeginListStat();
    void showPushBeginListStat();

    void addPushMiddleListStat();
    void showPushMiddleListStat();

    void addPushBackDequeStat();
    void showPushBackDequeStat();

    void addPushBeginDequeStat();
    void showPushBeginDequeStat();

    void addPushMiddleDequeStat();
    void showPushMiddleDequeStat();

    void addSortVectorStat();
    void showSortVectorStat();

    void addSortListStat();
    void showSortListStat();

    void addAccessVectorStat();
    void showAccessVectorStat();

    void addAccessListStat();
    void showAccessListStat();

    void addAccessMapStat();
    void showAccessMapStat();
};

#endif // TESTER_H
