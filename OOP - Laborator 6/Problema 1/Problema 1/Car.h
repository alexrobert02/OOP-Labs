#pragma once

class Car {
  protected:
    int fuelCapacity;
    int fuelConsumption;
    int averageSpeed[3];
    char* name;

  public:
    virtual char* getName()            = 0;
    virtual float getFuelCapacity()    = 0;
    virtual float getFuelConsumption() = 0;
    virtual float getAverageSpeed(int) = 0;
};
