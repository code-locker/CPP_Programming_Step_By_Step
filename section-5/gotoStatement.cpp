#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter the number:" << endl;
    cin >> number;
    if(number % 2 ==0)
        goto printEven;
    else
        goto printOdd;
    printEven:
        cout << "Number is even." << endl;
    printOdd:
        cout << "Number is Odd." << endl;
    return 0;
}