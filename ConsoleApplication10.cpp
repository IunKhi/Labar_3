#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    string name;
    int numOfEmployees;
};

class Employee {
public:
    string name;
    int age;
    bool hasChildren;

    Employee() {
        hasChildren = false;
    }

    Employee(string n, int a, bool children) : name(n), age(a), hasChildren(children) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Has children: " << (hasChildren ? "Yes" : "No") << endl;
    }
};

class Vehicle {
public:
    string brand;
    int year;

    Vehicle() {
        brand = "Unknown";
        year = 0;
    }

    Vehicle(string b, int y) : brand(b), year(y) {}

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Truck : public Vehicle {
public:
    int numOfWheels;
    bool isFourWheelDrive;

    Truck() : Vehicle() {
        numOfWheels = 0;
        isFourWheelDrive = false;
    }

    Truck(string b, int y, int wheels, bool fourWheelDrive) : Vehicle(b, y) {
        numOfWheels = wheels;
        isFourWheelDrive = fourWheelDrive;
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Number of wheels: " << numOfWheels << endl;
        cout << "Four wheel drive: " << (isFourWheelDrive ? "Yes" : "No") << endl;
    }

    void startEngine() {
        cout << "Starting the truck's engine" << endl;
    }
};

class Car : public Vehicle {
public:
    string color;
    bool isConvertible;

    Car() : Vehicle() {
        color = "Unknown";
        isConvertible = false;
    }

    Car(string b, int y, string c, bool convertible) : Vehicle(b, y) {
        color = c;
        isConvertible = convertible;
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Color: " << color << endl;
        cout << "Is convertible: " << (isConvertible ? "Yes" : "No") << endl;
    }

    void drive() {
        cout << "Driving the car" << endl;
    }
};

int main() {
    // Пример использования классов
    Company myCompany;
    myCompany.name = "MyCompany";
    myCompany.numOfEmployees = 100;

    Employee emp1("John Doe", 30, true);
    emp1.displayInfo();

    Vehicle vehicle1("BMW", 2020);
    vehicle1.displayInfo();

    Truck truck1("Ford", 2018, 4, true);
    truck1.displayInfo();
    truck1.startEngine();

    Car car1("Toyota", 2021, "Red", false);
    car1.displayInfo();
    car1.drive();

    return 0;
}