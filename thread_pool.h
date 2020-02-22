#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <thread>
#include <unordered_map>
#include <deque>
#include <atomic>
#include <mutex>

class Pool {
    struct ThreadContext {
        std::mutex m;
        std::deque<int> tasks;
        std::thread t;
        std::atomic<bool> interrupt { false };
    };

    std::unordered_map<size_t, ThreadContext> pool;
    std::atomic<bool> stop { false };

    void thread_loop() {
        while(!stop) {

        }
    }
public:
    enum { eMainThreadId = 0 };

    using InterruptSignal_t = std::atomic<bool>&;

    void submit() {

    }
};

#endif // THREAD_POOL_H
