#include "Student.h"
#include "GlobalFunctions.h"
#include <iostream>

int main() {
    Student x;
    x.SetName("Alex");
    x.SetMathematics(7.98);
    x.SetEnglish(5.49);
    x.SetHistory(8.20);
    Student y;
    y.SetName("Andrei");
    y.SetMathematics(6.3);
    y.SetEnglish(9.37);
    y.SetHistory(8.20);
    printf(
          "%d %d %d %d %d",
          CompareName(x, y),
          CompareMathematics(x, y),
          CompareEnglish(x, y),
          CompareHistory(x, y),
          CompareAverage(x, y));
    return 0;
}