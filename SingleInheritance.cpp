#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "Animal Eating !" << endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout << "Dog is barking.. !!" << endl;
    }
};

int main(){
    Dog myDog;

    myDog.eat();
    myDog.bark();
}