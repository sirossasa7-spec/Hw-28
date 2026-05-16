#include "Car.h"
#include "Truck.h"


int main() {
    PassengerCar car("Toyota", "Червоний", 50, 8);

    cout << "=== Легковий автомобіль ===" << endl;
    car.showData();
    cout << "Відстань: " << car.calculateDistance() << " км" << endl;

    cout << endl;

    Truck truck("Volvo", "Синій", 120, 25, 10);

    cout << "=== Вантажний автомобіль ===" << endl;
    truck.showTruckData();
    cout << "Відстань: " << truck.calculateDistance() << " км" << endl;
    cout << "Собівартість: " << truck.costPerTonKm(60) << " грн/т·км" << endl;

    return 0;
}
