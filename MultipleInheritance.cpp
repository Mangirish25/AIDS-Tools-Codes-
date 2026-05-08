#include <iostream>
using namespace std;

class Printer{
public:

    void prints(){
        cout << "Printer prints..." << endl;
    }
};

class Scanner{
public:

    void prints(){
        cout << "Scanner also prints..." << endl;
    }

    void scans(){
        cout << "Scanner Scans..." << endl;
    }
};

class AllinOne : public Printer, public Scanner{
public:
    AllinOne(){
        cout << "This is all in one util..." << endl;
    }
};

int main(){
    
    AllinOne al ;

    // Explicit handling
    al.Scanner::prints();
    al.Printer::prints();
    al.scans();
}