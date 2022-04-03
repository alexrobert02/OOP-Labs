#include "Car.h"
#include "Toyota.h"
#include "Weather.h"
#include <string>
using namespace std;

Toyota::Toyota() {
    name                = (char*) "Toyota";
    fuelCapacity        = 70;
    fuelConsumption     = 3;
    averageSpeed[Sunny] = 75;
    averageSpeed[Rain]  = 66;
    averageSpeed[Snow]  = 40;
}

char* Toyota::getName() {
    return name;
}

float Toyota::getFuelCapacity() {
    return fuelCapacity;
}

float Toyota::getFuelConsumption() {
    return fuelConsumption;
}

float Toyota::getAverageSpeed(int weather) {
    return averageSpeed[weather];
}
