#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "map.h"

int main()

{
    Map<int, const char*> m;

    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";

    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    Map<int, const char*> n;
    n[20] = "examen";

    printf("%d\n", m.Includes(n));

    m.Set(10, "licenta");
    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    m.Delete(20);
    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    printf("%d\n", m.Count());

    const char* value;
    m.Get(10, value);
    printf("%s\n", value);

    return 0;
}