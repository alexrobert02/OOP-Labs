#include "Car.h"
class Toyota : public Car {
  public:
    Toyota();
    char* getName() override;
    float getFuelCapacity() override;
    float getFuelConsumption() override;
    float getAverageSpeed(int) override;
};