#include <mutex>
#include <condition_variable>
using namespace std;

class Foo {
private:
    mutex mtx;
    condition_variable cv;
    int state; // 0 = first, 1 = second, 2 = third

public:
    Foo() {
        state = 0;
    }

    void first(function<void()> printFirst) {
        unique_lock<mutex> lock(mtx);
        printFirst();
        state = 1;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [&]() { return state >= 1; });
        printSecond();
        state = 2;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [&]() { return state >= 2; });
        printThird();
    }
};