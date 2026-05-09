#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout<< "Animal constructor called..."<<endl;
    }

    void eats(){
        cout << "Animal Eats"<<endl;
    }
};

class WingedAnimal : virtual public Animal{
public:
    WingedAnimal(){
        cout << "Winged Animal Constructor called..."<<endl;
    }

    void fly(){
        cout << "This animal flies.." << endl;
    }
};

class Mammal : virtual public Animal{
public:
    Mammal(){
        cout << "Mammal constructor called.."<<endl;
    }

    void breathe(){
        cout << "Mammal Breathes.."<<endl;
    }
};

class Bat : public WingedAnimal, public Mammal {
public:
    Bat() {
        cout << "Bat constructor called" << endl;
    }
};

int main() {
    Bat myBat;

    cout << "\n--- Capabilities ---" << endl;
    myBat.eats();
    myBat.fly();
    myBat.breathe();

    return 0;
}