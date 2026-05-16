#include "Truck.h"

Truck::Truck(string b, string c, double tank, double consumption, double capacity)
    : PassengerCar(b, c, tank, consumption) {
    loadCapacity = capacity;
}

Truck::~Truck() {
    cout << "Truck destroyed\n";
}

double Truck::costPerTonKm(double fuelPrice) const {
    return ((fuelConsumption / 100) * fuelPrice) / loadCapacity;
}

void Truck::showTruckData() const {
    showData();
    cout << "Вантажопідйомність: " << loadCapacity << endl;
}