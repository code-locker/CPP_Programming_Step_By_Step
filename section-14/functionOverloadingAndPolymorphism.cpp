#include <iostream>

using namespace std;

void display(int num){
    cout << "Integer number = " << num << endl;
}

void display(float num){
    cout << "Floating number = " << num << endl;
}

void display(int A, float B){
    cout << "Integer number = " << A  << " Floating number = " << B << endl;
}

int main(){
    int a = 10;
    float b = 20;

    display(a);
    display(b);
    display(a,b);
    return 0;
}