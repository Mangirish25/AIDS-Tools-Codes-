#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b){
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    int sum1 = calc.add(10, 20);
    int sum2 = calc.add(10, 20, 30);
    float sum3 = calc.add(1.0f, 1.5f);

    cout << "Sum of 2 numbers: " << sum1 << endl;
    cout << "Sum of 3 numbers: " << sum2 << endl;
    cout << "Sum of 3 float numbers: " << sum3 << endl;

    return 0;
}