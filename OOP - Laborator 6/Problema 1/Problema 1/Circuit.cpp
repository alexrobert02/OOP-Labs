#include <iostream>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
#include <string>
using namespace std;

Circuit::Circuit() {
    carNumber = 0;
}

void Circuit::SetLength(int lenght) {
    this->circuitLength = lenght;
}

void Circuit::SetWeather(int weather) {
    this->weather = weather;
}

void Circuit::AddCar(Car* c) {
    car[carNumber++] = c;
}

void Circuit::Race() {
    for (int i = 0; i < carNumber; i++) {
        int speed       = car[i]->getAverageSpeed(weather);
        float hours     = car[i]->getFuelCapacity() / car[i]->getFuelConsumption();
        float distance  = hours * speed;
        bool flag       = distance > circuitLength;
        timeToFinish[i] = hours * circuitLength / distance;
        finish[i]       = flag;
    }
}

void Circuit::ShowFinalRanks() {
    cout << "Cars that finished the race: \n";
    for (int i = 0; i < carNumber; i++) {
        if (finish[i]) {
            cout << car[i]->getName() << " - " << timeToFinish[i] << "\n";
        }
    }
    cout << "\n";
}

void Circuit::ShowWhoDidNotFinish() {
    cout << "Cars that didn't finish the race: \n";
    for (int i = 0; i < carNumber; i++) {
        if (!finish[i]) {
            cout << car[i]->getName() << " - " << timeToFinish[i] << "\n";
        }
    }
    cout << "\n";
}
