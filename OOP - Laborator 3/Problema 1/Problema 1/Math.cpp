#include "Math.h"
#include <cstdio>
#include <string.h>
#include <stdarg.h>

int Math::Add(int x, int y) {
    return x + y;
}

int Math::Add(int x, int y, int z) {
    return x + y + z;
}

int Math::Add(double x, double y) {
    return x + y;
}

int Math::Add(double x, double y, double z) {
    return x + y + z;
}

int Math::Mul(int x, int y) {
    return x * y;
}

int Math::Mul(int x, int y, int z) {
    return x * y * z;
}

int Math::Mul(double x, double y) {
    return x * y;
}

int Math::Mul(double x, double y, double z) {
    return x * y * z;
}

int Math::Add(int count, ...) {
    int x, sum = 0;
    va_list v1;
    va_start(v1, count);
    for (int i = 0; i < count; i++) {
        x   = va_arg(v1, int);
        sum = sum + x;
    }
    va_end(v1);
    return sum;
}

char* Math::Add(const char* x, const char* y) {
    if (x == nullptr || y == nullptr) {
        return nullptr;
    } else {
        char* p = new char[strlen(x) + strlen(y)];
        for (int i = 0; i < strlen(x); i++) {
            *(p + i) = x[i];
        }
        for (int i = 0; i < strlen(x); i++) {
            *(p + strlen(x) + i) = y[i];
        }
        *(p + strlen(x) + strlen(y)) = '\0';
        return p;
    }
}