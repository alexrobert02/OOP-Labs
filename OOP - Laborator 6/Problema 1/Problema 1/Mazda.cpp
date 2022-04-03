#include "Car.h"
#include "Mazda.h"
#include "Weather.h"
#include <string>
using namespace std;

Mazda::Mazda() {
    name                = (char*) "Mazda";
    fuelCapacity        = 90;
    fuelConsumption     = 20;
    averageSpeed[Sunny] = 80;
    averageSpeed[Rain]  = 40;
    averageSpeed[Snow]  = 60;
}

char* Mazda::getName() {
    return name;
}

float Mazda::getFuelCapacity() {
    return fuelCapacity;
}

float Mazda::getFuelConsumption() {
    return fuelConsumption;
}

float Mazda::getAverageSpeed(int weather) {
    return averageSpeed[weather];
}
