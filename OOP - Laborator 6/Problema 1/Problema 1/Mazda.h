#include "Car.h"
class Mazda : public Car {
  public:
    Mazda();
    char* getName() override;
    float getFuelCapacity() override;
    float getFuelConsumption() override;
    float getAverageSpeed(int) override;
};