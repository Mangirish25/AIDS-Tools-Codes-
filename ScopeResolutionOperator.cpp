#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int marks;

    void setName(string n);
    void setMarks(int m);
    void print();
};

void Student::setName(string n){
    name = n;
}

void Student::setMarks(int m){
    marks = m;
}

void Student::print(){
    cout << this->name << " " << this->marks << endl;
}

class Factorial{
public:
    int number;
    void setNumber(int n);
    long long calculateFactorial();
};

void Factorial::setNumber(int n){
    number = n;
}

long long Factorial::calculateFactorial(){
    long long factorial = 1;

    for(int i = number; i >= 1; i--){
        factorial *= i;
    }

    return factorial;
}

int main(){
    Factorial fac;

    fac.setNumber(5);
    long long fact = fac.calculateFactorial();

    cout << fact << endl;

    Student s;
    s.setName("Mangirish");
    s.setMarks(95);
    s.print();
}