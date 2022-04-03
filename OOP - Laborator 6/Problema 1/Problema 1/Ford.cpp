#include "Car.h"
#include "Ford.h"
#include "Weather.h"
#include <string>
using namespace std;

Ford::Ford() {
    name                = (char*) "Ford";
    fuelCapacity        = 60;
    fuelConsumption     = 10;
    averageSpeed[Sunny] = 60;
    averageSpeed[Rain]  = 40;
    averageSpeed[Snow]  = 20;
}

char* Ford::getName() {
    return name;
}

float Ford::getFuelCapacity() {
    return fuelCapacity;
}

float Ford::getFuelConsumption() {
    return fuelConsumption;
}

float Ford::getAverageSpeed(int weather) {
    return averageSpeed[weather];
}
