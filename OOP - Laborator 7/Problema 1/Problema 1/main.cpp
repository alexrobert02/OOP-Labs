#include <iostream>

float operator""_Kelvin(unsigned long long int kelvin) {
    return kelvin - 273.15;
}

float operator""_Fahrenheit(unsigned long long int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;

    std::cout << "300 Kelvin is " << a << " Celsius\n";
    std::cout << "120 Fahrenheit is " << b << " Celsius\n";

    return 0;
}
