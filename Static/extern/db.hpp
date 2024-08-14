#pragma once

#include <functional>
#include <cstdint>

class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    void setFunction(std::function<uint32_t()> func) {
        function = func;
    }

    uint32_t callFunction() {
        if (function) {
            return function();
        }
        return 0;
    }

private:
    Singleton() {}
    ~Singleton() {}

    static std::function<uint32_t()> function;
};
