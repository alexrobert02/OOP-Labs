#include "Car.h"
class Mercedes : public Car {
  public:
    Mercedes();
    char* getName() override;
    float getFuelCapacity() override;
    float getFuelConsumption() override;
    float getAverageSpeed(int) override;
};