#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <cstdio>

int main() {
    Math Mathematics;
    printf("%d \n", Mathematics.Add(3, 5));
    printf("%d \n", Mathematics.Add(4, 2, 7));
    printf("%d \n", Mathematics.Add(3.8, 4.2));
    printf("%d \n", Mathematics.Add(6.5, 3.1, 2.4));
    printf("%d \n", Mathematics.Mul(6, 9));
    printf("%d \n", Mathematics.Mul(5, 4, 1));
    printf("%d \n", Mathematics.Mul(5.7, 6.3));
    printf("%d \n", Mathematics.Mul(7.3, 2.1, 8.9));
    printf("%d \n", Mathematics.Add(7, 3, 4, 2, 11, 6, 1, 5));
    printf("%s \n", Mathematics.Add("Robert ", "Zaharia"));
    return 0;
}