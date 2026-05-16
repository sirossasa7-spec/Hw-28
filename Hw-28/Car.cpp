#include "Car.h"

PassengerCar::PassengerCar(string b, string c, double tank, double consumption) {
    brand = b;
    color = c;
    fuelTankVolume = tank;
    fuelConsumption = consumption;
}

void PassengerCar::setData(string b, string c, double tank, double consumption) {
    brand = b;
    color = c;
    fuelTankVolume = tank;
    fuelConsumption = consumption;
}

void PassengerCar::showData() const {
    cout << "Марка: " << brand << endl;
    cout << "Колір: " << color << endl;
}

double PassengerCar::calculateDistance() const {
    return (fuelTankVolume / fuelConsumption) * 100;
}