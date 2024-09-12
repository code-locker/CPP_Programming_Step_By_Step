#include <iostream>

using namespace std;

int main(){
    char operatorChar;
    float numberA, numberB;
    cout << "Enter the operators(+,-,/,*):" << endl;
    cin >> operatorChar;
    cout << "Enter the first number:" << endl;
    cin >> numberA;
    cout << "Enter the second number:" << endl;
    cin >> numberB;

    switch (operatorChar)
    {
    case '*':
        cout << numberA << "*" << numberB << "=" << numberA*numberB << endl;
        break;
    case '-':
        cout << numberA << "-" << numberB << "=" << numberA-numberB << endl;
        break;
    case '+':
        cout << numberA << "+" << numberB << "=" << numberA+numberB << endl;
        break;
    case '/':
        if(numberB)
            cout << numberA << "/" << numberB << "=" << numberA/numberB << endl;
        else
            cout << "Division by zero." << endl;
        break;
    
    default:
        cout << "Operator doesn't match." << endl;
        break;
    }
    return 0;
}