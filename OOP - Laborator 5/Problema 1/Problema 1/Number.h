#pragma once
class Number {
    char value[100];
    int decimalValue;
    int base;

  public:
    Number(const char* value, int base = 10); // where base is between 2 and 16
    Number(int value);
    ~Number();
    friend Number operator+(Number n1, Number n2);
    friend Number operator-(Number n1, Number n2);
    friend Number operator+=(Number n1, Number n2);
    friend bool operator>(Number n1, Number n2);
    friend bool operator>=(Number n1, Number n2);
    friend bool operator<=(Number n1, Number n2);
    friend bool operator<(Number n1, Number n2);
    friend bool operator==(Number n1, Number n2);
    char operator[](int index);
    friend Number operator--(Number n);
    void SwitchBase(int newBase);
    void Print();
    friend Number operator--(Number n, int);
    int GetDigitsCount(); // returns the number of digits for the current number
    int GetBase();        // returns the current base
};