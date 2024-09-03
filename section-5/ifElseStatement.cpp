#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter the number:" << endl;
    cin >> number;

    if(number > 0){
        cout << "Entered number is positive." << endl;
    }
    else{
        cout << "Entered number is negetive." << endl;
    }
    cout << "Program executed sucessfully." << endl;
    return 0;
}