#include "Student.h"
#include <cstring>

void Student::SetName(const char* name) {
    strcpy_s(this->name, name);
}

const char* Student::GetName() const {
    return name;
}

void Student::SetMathematics(const float Mathematics) {
    this->Mathematics = Mathematics;
}

const float Student::GetMathematics() const {
    return Mathematics;
}

void Student::SetEnglish(const float English) {
    this->English = English;
}

const float Student::GetEnglish() const {
    return English;
}

void Student::SetHistory(const float History) {
    this->History = History;
}

const float Student::GetHistory() const {
    return History;
}

const float Student::GetAverage() const {
    return (Mathematics + English + History) / 3;
}