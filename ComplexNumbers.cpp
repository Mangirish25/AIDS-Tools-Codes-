#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex b){
        Complex temp;
        temp.imag = imag + b.imag;
        temp.real = real + b.real;

        return temp;
    }
    
};

int main() {
    Complex c1, c2, sum;

    cout << "Complex Number 1:" << endl;
    c1.input();

    cout << "Complex Number 2:" << endl;
    c2.input();

    cout << "Display:" << endl;
    cout << "C1: "; 
    c1.display();
    cout << "C2: "; 
    c2.display();

    sum = c1.add(c2);
    cout << "The sum is: ";
    sum.display();

    return 0;
}