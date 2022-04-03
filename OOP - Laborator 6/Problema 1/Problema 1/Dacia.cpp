#include "Car.h"
#include "Dacia.h"
#include "Weather.h"
#include <string>
using namespace std;

Dacia::Dacia() {
    name                = (char*) "Dacia";
    fuelCapacity        = 80;
    fuelConsumption     = 30;
    averageSpeed[Sunny] = 40;
    averageSpeed[Rain]  = 30;
    averageSpeed[Snow]  = 25;
}

char* Dacia::getName() {
    return name;
}

float Dacia::getFuelCapacity() {
    return fuelCapacity;
}

float Dacia::getFuelConsumption() {
    return fuelConsumption;
}

float Dacia::getAverageSpeed(int weather) {
    return averageSpeed[weather];
}
