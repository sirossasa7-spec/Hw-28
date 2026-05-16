#include <iostream>
#include <string>
using namespace std;


class PassengerCar {
protected:
    string brand;
    string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    PassengerCar(string b, string c, double tank, double consumption);

    void setData(string b, string c, double tank, double consumption);
    void showData() const;
    double calculateDistance() const;
};