#pragma once
#include "Car.h"

class Truck : public PassengerCar {
private:
    double loadCapacity;

public:
    Truck(string b, string c, double tank, double consumption, double capacity);
    ~Truck();

    double costPerTonKm(double fuelPrice) const;
    void showTruckData() const;
};