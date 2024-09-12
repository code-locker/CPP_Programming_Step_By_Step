#include <iostream>

using namespace std;

int main(){
    // Comma(,) operator
    int a, b ;

    a = 20;
    b = 10;
    // conditionala operators
    (a > b) ? cout << "a is greater": cout << "b is greater";

    // sizeof
    cout << endl << "Size of a is " << sizeof(a) << " bytes" << endl;

    return 0;
}