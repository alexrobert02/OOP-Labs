#include "Car.h"
#include "Mercedes.h"
#include "Weather.h"
#include <string>
using namespace std;

Mercedes::Mercedes() {
    name                = (char*) "Mercedes";
    fuelCapacity        = 110;
    fuelConsumption     = 15;
    averageSpeed[Sunny] = 180;
    averageSpeed[Rain]  = 130;
    averageSpeed[Snow]  = 90;
}

char* Mercedes::getName() {
    return name;
}

float Mercedes::getFuelCapacity() {
    return fuelCapacity;
}

float Mercedes::getFuelConsumption() {
    return fuelConsumption;
}

float Mercedes::getAverageSpeed(int weather) {
    return averageSpeed[weather];
}
