#include <iostream>

using namespace std;

int factorial(int n){
    if(n > 1){
        return n * factorial(n -1);
    }
    else
        return 1;
}

int main(){
    cout << "Factorial(5) = " << factorial(5) << endl;
    return 0;
}