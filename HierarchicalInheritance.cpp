#include <iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout << "This is Vehicle .. " << endl;
    }

    void run(){
        cout << "Vehicle Runs..." << endl;
    }
};

class Car : public Vehicle{
public:
    Car(){
        cout << "This is a car from Vehicle.." << endl;
    }
};

class Truck : public Vehicle{
public:
    Truck(){
        cout << "This is Truck from Vehicles" << endl;
    }
};

class Bike : public Vehicle{
public:
    Bike(){
        cout << "This is a Bike from Vehicle.." << endl;
    }
};

class Bus : public Vehicle{
public:
    Bus(){
        cout << "This is Bus from Vehicles" << endl;
    }
};

int main(){
    Car c;
    Truck t;
    Bike b;
    Bus bs;
}