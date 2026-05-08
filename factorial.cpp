#include <iostream>
using namespace std;

class Factorial{
    public:
        int factorialLoop(int n){

            int result = 1;

            if(n == 0 || n == 1) return 1;

            for(int i = 1; i <= n; i++){
                result *= i;
            }

            return result;
        }

        int factorialRecursion(int n){
            if(n == 0 || n == 1)  return 1;

            return n * factorialRecursion(n-1);
        }
};

int main(){

    Factorial fac;

    int n;

    cout<< "Enter the number of n: ";
    cin >> n;

    int result1 = fac.factorialLoop(n);
    int result2 = fac.factorialRecursion(n);

    cout<< "Factorial (Loop): " << result1 << endl;
    cout << "Factorial (Recursion): " << result2 << endl;

}