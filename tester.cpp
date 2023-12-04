#include "tester.h"

Tester::Tester(){
    analyst = new Analyst();
}

Tester::Tester(Analyst *_analyst) {
    analyst = _analyst;
}

Tester::Tester(const Tester& obj) {
    analyst = obj.analyst;
}

Tester::~Tester(){
    delete analyst;
}

void Tester::addPushBackVectorStat() {

    QRandomGenerator qRandomGenerator;

    /* Build array for test */
    std::vector <uint64_t> forTest;
    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){

        /* Build array for add and measure time */
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        /* Measure time from start to stop */
        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.end(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Vector.PushBack", time/1000, len);
    }
}

void Tester::showPushBackVectorStat() {
    analyst->showStatistics("Vector.PushBack");
}

void Tester::addPushBeginVectorStat() {

    QRandomGenerator qRandomGenerator;

    std::vector <uint64_t> forTest;
    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.begin(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Vector.PushBegin", time/1000, len);
    }
}

void Tester::showPushBeginVectorStat() {
    analyst->showStatistics("Vector.PushBegin");
}

void Tester::addPushMiddleVectorStat() {

    QRandomGenerator qRandomGenerator;

    std::vector <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        int index = qRandomGenerator.bounded(0, len - 1);
        auto start = std::chrono::steady_clock::now();
        forTest.insert( std::next(forTest.begin(), index), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Vector.PushMiddle", time/1000, len);
    }
}

void Tester::showPushMiddleVectorStat() {
    analyst->showStatistics("Vector.PushMiddle");
}

void Tester::addPushBackListStat() {

    QRandomGenerator qRandomGenerator;

    std::list <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.end(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("List.PushBack", time/1000, len);
    }
}

void Tester::showPushBackListStat() {
    analyst->showStatistics("List.PushBack");
}

void Tester::addPushBeginListStat() {

    QRandomGenerator qRandomGenerator;

    std::list <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.begin(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("List.PushBegin", time/1000, len);
    }
}

void Tester::showPushBeginListStat() {
    analyst->showStatistics("List.PushBegin");
}

void Tester::addPushMiddleListStat() {

    QRandomGenerator qRandomGenerator;

    std::list <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        int index = qRandomGenerator.bounded(0, len - 1);
        auto start = std::chrono::steady_clock::now();
        forTest.insert( std::next(forTest.begin(), index), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("List.PushMiddle", time/1000, len);
    }
}

void Tester::showPushMiddleListStat() {
    analyst->showStatistics("List.PushMiddle");
}

void Tester::addPushBackDequeStat() {

    QRandomGenerator qRandomGenerator;

    std::deque <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.end(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Deque.PushBack", time/1000, len);
    }
}

void Tester::showPushBackDequeStat() {
    analyst->showStatistics("Deque.PushBack");
}

void Tester::addPushBeginDequeStat() {

    QRandomGenerator qRandomGenerator;

    std::deque <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.insert( forTest.begin(), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Deque.PushBegin", time/1000, len);
    }
}

void Tester::showPushBeginDequeStat() {
    analyst->showStatistics("Deque.PushBegin");
}

void Tester::addPushMiddleDequeStat() {

    QRandomGenerator qRandomGenerator;

    std::deque <uint64_t> forTest;

    const int range = 1000;

    for (int i = 0; i < 1000; i++){
        forTest.push_back(qRandomGenerator.bounded(0, range));
    }

    for(int len = 500; len <= 10000; len += 500){
        std::vector <uint64_t> forAdd;

        for(int i = 0; i < len; i++){
            forAdd.push_back(qRandomGenerator.bounded(0, range));
        }

        int index = qRandomGenerator.bounded(0, len - 1);
        auto start = std::chrono::steady_clock::now();
        forTest.insert( std::next(forTest.begin(), index), forAdd.begin(), forAdd.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Deque.PushMiddle", time/1000, len);
    }
}

void Tester::showPushMiddleDequeStat() {
    analyst->showStatistics("Deque.PushMiddle");
}

void Tester::addSortVectorStat() {
    QRandomGenerator qRandomGenerator;

    const int range = 1000;

    for(int len = 500; len <= 10000; len += 500){

        /* Build array for test and measure time */
        std::vector <uint64_t> forTest;

        for(int i = 0; i < len; i++){
            forTest.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        std::sort(forTest.begin(), forTest.end());
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("Vector.Sort", time/1000, len);
    }
}

void Tester::showSortVectorStat() {
    analyst->showStatistics("Vector.Sort");
}

void Tester::addSortListStat() {
    QRandomGenerator qRandomGenerator;

    const int range = 1000;

    for(int len = 500; len <= 10000; len += 500){
        std::list <uint64_t> forTest;

        for(int i = 0; i < len; i++){
            forTest.push_back(qRandomGenerator.bounded(0, range));
        }

        auto start = std::chrono::steady_clock::now();
        forTest.sort();
        auto stop = std::chrono::steady_clock::now();

        auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();

        analyst->addNewStatistics("List.Sort", time/1000, len);
    }
}

void Tester::showSortListStat() {
    analyst->showStatistics("List.Sort");
}

void Tester::addAccessVectorStat() {
    QRandomGenerator qRandomGenerator;

    const int range = 1000;

    for(int len = 500; len <= 10000; len += 500){

        /* Build array for test and measure time */
        std::vector <uint64_t> forTest;

        for(int i = 0; i < len; i++){
            forTest.push_back(qRandomGenerator.bounded(0, range));
        }

        auto resultTime = 0;
        for (int i = 0; i < 1000; i++){
            int index = qRandomGenerator.bounded(0, len - 1);

            auto start = std::chrono::steady_clock::now();
            forTest[index] -= 10;
            auto stop = std::chrono::steady_clock::now();

            resultTime += std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
        }

        analyst->addNewStatistics("Vector.Access", resultTime/1000, len);
    }
}

void Tester::showAccessVectorStat() {
    analyst->showStatistics("Vector.Access");
}

void Tester::addAccessListStat() {
    QRandomGenerator qRandomGenerator;

    const int range = 1000;

    for(int len = 500; len <= 10000; len += 500){
        std::list <uint64_t> forTest;

        for(int i = 0; i < len; i++){
            forTest.push_back(qRandomGenerator.bounded(0, range));
        }

        auto resultTime = 0;
        for (int i = 0; i < 1000; i++){
            int index = qRandomGenerator.bounded(0, len - 1);

            auto start = std::chrono::steady_clock::now();
            *std::next(forTest.begin(), index) -= 10;
            auto stop = std::chrono::steady_clock::now();

            resultTime += std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
        }

        analyst->addNewStatistics("List.Access", resultTime/1000, len);
    }
}

void Tester::showAccessListStat() {
    analyst->showStatistics("List.Access");
}

void Tester::addAccessMapStat() {
    QRandomGenerator qRandomGenerator;

    const int range = 1000;

    for(int len = 500; len <= 10000; len += 500){
        std::map <uint64_t, uint64_t> forTest;

        for(int i = 0; i < len; i++){
            forTest.insert({i, qRandomGenerator.bounded(0, range)});
        }

        auto resultTime = 0;
        for (int i = 0; i < 1000; i++){
            int index = qRandomGenerator.bounded(0, len - 1);

            auto start = std::chrono::steady_clock::now();
            forTest[index] -= 10;
            auto stop = std::chrono::steady_clock::now();

            resultTime += std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
        }

        analyst->addNewStatistics("Map.Access", resultTime/1000, len);
    }
}

void Tester::showAccessMapStat() {
    analyst->showStatistics("Map.Access");
}
