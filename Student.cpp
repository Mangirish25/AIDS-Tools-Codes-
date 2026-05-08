#include <iostream>
using namespace std;

class Student{
    public:

        int rollNumber;
        string name;
        int marks;

        Student(){
            this->rollNumber = 0;
            this->name = "";
            this->marks = 0;
        }

        Student(int rollNumber, string name, int marks){
            this->rollNumber = rollNumber;
            this->name = name;
            this->marks = marks;
        }

        void getMarks(){
            cout << marks;
        }
};

int main(){

    int n;
    cout<< "Enter the number of Students: ";
    cin >> n;

    Student arr[n];

    for(int i=0; i<n; i++){
        int rollNumber = i + 1;
        int marks;
        string name;

        cout<< "Enter name: ";
        cin >> name;
        cout<< "Enter marks: ";
        cin >> marks;
        
        arr[i] = Student(rollNumber, name, marks);
    }

    cout << "List of Students" << endl;
    for(int i=0; i<n; i++){
        cout<< "Roll Number: " << arr[i].rollNumber << " Name: " << arr[i].name << " Marks: " << arr[i].marks << endl;
    }
}