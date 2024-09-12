#include <iostream>

using namespace std;

//Swap by reference of a variable
void swap(int&, int&);

// Swap using C pointer concept
void swapagain(int*, int*);

int main(){
    int numA = 10, numB = 20;
    cout << "Values of numA=" << numA << " and numB=" << numB << " before swap." << endl;
    swap(numA,numB);
    cout << "Values of numA=" << numA << " and numB=" << numB << " after swap." << endl;
    swapagain(&numA,&numB);
    cout << "Values of numA=" << numA << " and numB=" << numB << " after swapping again." << endl;

    return 0;
}

void swap(int& numA, int& numB){
    int temp = numA;
    numA = numB;
    numB = temp;
}

void swapagain(int* numA, int* numB){
    int temp = *numA;
    *numA = *numB;
    *numB = temp;
}