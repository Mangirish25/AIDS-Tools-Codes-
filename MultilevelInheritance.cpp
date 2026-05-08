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

class Sedan : public Car{
public:
    Sedan(){
        cout << "This is Sedan from Cars.. " << endl;
    }
};

int main(){
    Sedan s;

    s.run();
}