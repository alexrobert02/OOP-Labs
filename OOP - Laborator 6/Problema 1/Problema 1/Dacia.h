#include "Car.h"
class Dacia : public Car {
  public:
    Dacia();
    char* getName() override;
    float getFuelCapacity() override;
    float getFuelConsumption() override;
    float getAverageSpeed(int) override;
};