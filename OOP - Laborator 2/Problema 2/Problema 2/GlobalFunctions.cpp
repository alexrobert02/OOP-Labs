#include "GlobalFunctions.h"
#include "Student.h"
#include <cstring>

int CompareName(Student x, Student y) {
    if (strcmp(x.GetName(), y.GetName()) > 0)
        return 1;
    if (strcmp(x.GetName(), y.GetName()) == 0)
        return 0;
    return -1;
}

int CompareMathematics(Student x, Student y) {
    if (x.GetMathematics() > y.GetMathematics())
        return 1;
    if (x.GetMathematics() == y.GetMathematics())
        return 0;
    return -1;
}

int CompareEnglish(Student x, Student y) {
    if (x.GetEnglish() > y.GetEnglish())
        return 1;
    if (x.GetEnglish() == y.GetEnglish())
        return 0;
    return -1;
}

int CompareHistory(Student x, Student y) {
    if (x.GetHistory() > y.GetHistory())
        return 1;
    if (x.GetHistory() == y.GetHistory())
        return 0;
    return -1;
}

int CompareAverage(Student x, Student y) {
    if (x.GetAverage() > y.GetAverage())
        return 1;
    if (x.GetAverage() == y.GetAverage())
        return 0;
    return -1;
}