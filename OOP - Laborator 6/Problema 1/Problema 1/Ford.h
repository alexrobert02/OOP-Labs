#include "Car.h"
class Ford : public Car {
  public:
    Ford();
    char* getName() override;
    float getFuelCapacity() override;
    float getFuelConsumption() override;
    float getAverageSpeed(int) override;
};