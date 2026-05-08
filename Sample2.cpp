#include <iostream>
using namespace std;

int addTwoNumbers(int a, int b){
    return a+b;
}
int subtractTwoNumbers(int a, int b){
    return a-b;
}

int main(){
    int addition = addTwoNumbers(10, 20);
    int subtraction = subtractTwoNumbers(20, 10);

    cout<< "Addition is: " << addition << " Subtraction is: " << subtraction;
}