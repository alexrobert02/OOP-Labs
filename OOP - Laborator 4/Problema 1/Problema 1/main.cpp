#include <iostream>
#include "Sort.h"
using namespace std;
int main() {
    srand(time(NULL));
    Sort s1(10, 50, 90);
    Sort s2({ 10, 20, 30, 40, 50 });
    int v[4];
    v[0] = 7;
    v[1] = 2;
    v[2] = 5;
    v[3] = 8;
    Sort s3(v, 4);
    Sort s4(10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1);
    Sort s5("10,40,100,5,70");
    std::cout << "QuickSort: ";
    s5.QuickSort(true);
    s5.Print();
    std::cout << "Bubblesort: ";
    s3.QuickSort(true);
    s3.Print();
    std::cout << "Insertsort: ";
    s2.InsertSort(true);
    s2.Print();
}
