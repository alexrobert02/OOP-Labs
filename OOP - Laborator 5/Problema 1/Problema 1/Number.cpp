#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <string>
#include <stdio.h>
Number::Number(const char* value, int base) {
    int lungime = strlen(value);
    int putere  = 1;
    strcpy(this->value, value);
    this->decimalValue = 0;
    for (int i = lungime - 1; i >= 0; i--) {
        if (value[i] >= '0' && value[i] <= '9')
            this->decimalValue += (value[i] - '0') * putere;
        else if (value[i] >= 'A')
            this->decimalValue += (value[i] - 'A' + 10) * putere;

        putere = putere * base;
    }
    this->base = base;
}

Number::Number(int value) {
    this->base         = 10;
    this->decimalValue = value;
    _itoa(value, this->value, 10);
}

Number::~Number() {
    this->value[0]     = '\0';
    this->base         = 0;
    this->decimalValue = 0;
}

void reverseString(char* str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp        = str[i];
        str[i]           = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

Number operator+(Number n1, Number n2) {
    int result = n1.decimalValue + n2.decimalValue;
    char res[100]{};
    int index   = 0;
    int maxBase = n1.base >= n2.base ? n1.base : n2.base;
    while (result > 0) {
        if (result % maxBase >= 0 && result % maxBase <= 9)
            res[index] = result % maxBase + '0';
        else
            res[index] = result % maxBase - 10 + 'A';
        result /= maxBase;
        index++;
    }
    res[index] = '\0';
    reverseString(res);
    Number resultNumber(res, maxBase);
    return resultNumber;
}

Number operator-(Number n1, Number n2) {
    int result = n1.decimalValue - n2.decimalValue;
    char res[100]{};
    int index   = 0;
    int maxBase = n1.base >= n2.base ? n1.base : n2.base;
    while (result > 0) {
        if (result % maxBase >= 0 && result % maxBase <= 9)
            res[index] = result % maxBase - '0';
        else
            res[index] = result % maxBase + 10 - 'A';
        result /= maxBase;
        index++;
    }
    res[index] = '\0';
    reverseString(res);
    Number resultNumber(res, maxBase);
    return resultNumber;
}

Number operator+=(Number n1, Number n2) {
    int result = n1.decimalValue + n2.decimalValue;
    char res[100]{};
    int index   = 0;
    int maxBase = n1.base >= n2.base ? n1.base : n2.base;
    while (result > 0) {
        if (result % maxBase >= 0 && result % maxBase <= 9)
            res[index] = result % maxBase + '0';
        else
            res[index] = result % maxBase - 10 + 'A';
        result /= maxBase;
        index++;
    }
    res[index] = '\0';
    reverseString(res);
    Number resultNumber(res, maxBase);
    return resultNumber;
}

bool operator>(Number n1, Number n2) {
    return n2.decimalValue > n1.decimalValue;
}

bool operator>=(Number n1, Number n2) {
    return n2.decimalValue >= n1.decimalValue;
}

bool operator<=(Number n1, Number n2) {
    return n2.decimalValue <= n1.decimalValue;
}

bool operator<(Number n1, Number n2) {
    return n2.decimalValue < n1.decimalValue;
}

bool operator==(Number n1, Number n2) {
    return n2.decimalValue == n1.decimalValue;
}

char Number::operator[](int index) {
    return value[index];
}

void Number::SwitchBase(int newBase) {
    int index = 0;
    int val   = this->decimalValue;
    while (val > 0) {
        if (val % newBase >= 0 && val % newBase <= 9)
            this->value[index] = val % newBase + '0';
        else
            this->value[index] = val % newBase - 10 + 'A';
        val /= newBase;
        index++;
    }
    this->base         = newBase;
    this->value[index] = '\0';
    reverseString(this->value);
}

void Number::Print() {
    printf("%s\n", this->value);
}

Number operator--(Number n, int) {
    for (int i = 0; i < strlen(n.value) - 1; i++) {
        n.value[i] = n.value[i + 1];
    }
    n.value[strlen(n.value) - 1] = '\0';
    n.decimalValue               = atoi(n.value);
    return n;
}

Number operator--(Number n) {
    n.value[strlen(n.value) - 1] = '\0';
    n.decimalValue /= 10;
    return n;
}

int Number::GetDigitsCount() {
    return strlen(this->value);
}

int Number::GetBase() {
    return this->base;
}
