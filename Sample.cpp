#include <iostream>
using namespace std;

class Calculator{
    public:
        int result;

        int addTwoNumbers(int a, int b){
            result = a + b;
            return result;
        }

        int diffTwoNumbers(int a, int b){
            result = a - b;
            return result;
        }
};

int main(){

    Calculator calc;

    int addition = calc.addTwoNumbers(20, 30);
    int subraction = calc.diffTwoNumbers(30, 20);

    cout<< "Addition is: " << addition << " Subtraction is: " << subraction;

}