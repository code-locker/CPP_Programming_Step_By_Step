#include <iostream>

using namespace std;

int max(int,int);

int main(){
    cout << "Maximum(10,100) is " << max(10,100) << endl;
    return 0;
}

int max(int numA, int numB){
    if(numA>numB)
        return numA;
    else
        return numB;
}