#include "NumberList.h"
#include <iostream>

int main() {
    NumberList list;
    list.Init();
    for (int i = 9; i >= 0; i--) {
        list.Add(i);
    }
    if (!list.Add(30))
        printf("list is full\n");
    list.Print();
    list.Sort();
    list.Print();
}