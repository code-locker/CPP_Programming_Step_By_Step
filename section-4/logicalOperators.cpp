#include <iostream>

using namespace std;

int main(){
    int numA = 20;
    int numB = 10;
    if((numA%2==0) && (numB%2==0)){
        cout << numA << " and " << numB << " both are even numbers." << endl;
    }
    
    if((numA>0) || (numB>0)){
        cout << "Either one of the number is positive." << endl;
    }
    return 0;
}