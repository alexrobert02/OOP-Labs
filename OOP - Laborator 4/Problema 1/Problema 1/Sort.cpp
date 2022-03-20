#include "Sort.h"
#include <iostream>
#include "stdarg.h"
#include <string.h>
using namespace std;
void swap(int v[], int index1, int index2) {
    int temp  = v[index1];
    v[index1] = v[index2];
    v[index2] = temp;
}
int partitionare(int v[], int start, int end, bool ascendent) {
    int pivot = v[end];
    int i     = start - 1;
    for (int j = start; j <= end - 1; j++) {
        if (ascendent && v[j] < pivot || !ascendent && v[j] > pivot) {
            i++;
            swap(v, i, j);
        }
    }
    swap(v, i + 1, end);
    return i + 1;
}
void quickSortImplementare(int v[], int start, int end, bool ascendent) {
    if (start < end) {
        int pivotIndex = partitionare(v, start, end, ascendent);
        quickSortImplementare(v, start, pivotIndex - 1, ascendent);
        quickSortImplementare(v, pivotIndex + 1, end, ascendent);
    }
}
Sort::Sort(int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        List[i] = rand() % (max - min) + min;
    }
    this->count = size;
}
Sort::Sort(initializer_list<int> list) {
    this->count = 0;
    for (int x : list) {
        this->List[this->count] = x;
        this->count++;
    }
}
Sort::Sort(int v[], int size) {
    for (int i = 0; i < size; i++) {
        this->List[i] = v[i];
    }
    this->count = size;
}
Sort::Sort(int n, ...) {
    int rez = 0;
    va_list L;
    va_start(L, n);
    for (int i = 0; i < n; i++) {
        this->List[i] = va_arg(L, int);
    }
    va_end(L);
    this->count = n;
}
Sort::Sort(const char* s) {
    int i           = 0;
    int index_Numar = 0;
    char temp[10]   = { 0 };
    int lungimeTemp = 0;
    while (s[i] != '\0') {
        if (s[i] != ',') {
            temp[lungimeTemp]     = s[i];
            temp[lungimeTemp + 1] = '\0';
            lungimeTemp++;
        } else {
            this->List[index_Numar] = atoi(temp);
            index_Numar++;
            temp[0]     = '\0';
            lungimeTemp = 0;
        }
        i++;
    }
    if (temp[0] != '\0') {
        this->List[index_Numar] = atoi(temp);
        index_Numar++;
    }
    this->count = index_Numar;
}
void Sort::InsertSort(bool ascendent) {
    for (int i = 1; i < this->count; i++) {
        int elCurent = this->List[i];
        int j        = i - 1;

        while ((ascendent && elCurent < this->List[j]) || (!ascendent && elCurent > this->List[j]) && j >= 0) {
            this->List[j + 1] = this->List[j];
            j--;
        }
        this->List[j + 1] = elCurent;
    }
}
void Sort::QuickSort(bool ascendent) {
    quickSortImplementare(this->List, 0, count - 1, ascendent);
}
void Sort::BubbleSort(bool ascendent) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = 0; i < this->count - 1; i++) {
            if (ascendent && this->List[i] > this->List[i + 1] || !ascendent && this->List[i] < this->List[i + 1]) {
                int temp          = this->List[i];
                this->List[i]     = this->List[i + 1];
                this->List[i + 1] = temp;
                flag              = true;
            }
        }
    }
}
void Sort::Print() {
    for (int i = 0; i < this->count; i++) {
        cout << this->List[i] << " ";
    }
    cout << endl;
}
int Sort::GetElementsCount() {
    return this->count;
}
int Sort::GetElementFromIndex(int index) {
    return this->List[index];
}