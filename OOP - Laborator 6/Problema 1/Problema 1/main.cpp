#include <iostream>
#include <string>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
#include <string>
using namespace std;

int main() {
    Circuit c;
    c.SetLength(200);
    c.SetWeather(Weather::Sunny);
    c.AddCar(new Dacia());
    c.AddCar(new Ford());
    c.AddCar(new Mazda());
    c.AddCar(new Toyota());
    c.AddCar(new Mercedes());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();
    return 0;
}
