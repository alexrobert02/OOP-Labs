#pragma once
#include <initializer_list>
using namespace std;
class Sort {
    int List[100];
    int count;

  public:
    Sort(int size, int min, int max);
    Sort(initializer_list<int> list);
    Sort(int v[], int size);
    Sort(int n, ...);
    Sort(const char*);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};