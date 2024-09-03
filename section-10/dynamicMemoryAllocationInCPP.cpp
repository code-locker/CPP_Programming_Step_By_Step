#include <iostream>

using namespace std;

int main(){
    //Dynamically allocating memeory for a variable
    int *ptr = new int;
    *ptr = 4;
    cout << "Value of ptr =" << *ptr << endl;
    // Dynamically allocating memeory for a array and find the sum of elements
    int length;
    cout << "How many elements you want to store in array?"<< endl;
    cin >> length;
    int *arrPtr = new int[length];
    cout << "Enter " << length << " elements:" << endl;
    for (int i = 0; i < length; i++){
        cin >> *(arrPtr+i);
    }
    int sum =0;
    for (int i = 0; i < length; i++){
        sum += *(arrPtr+i);
    }
    cout << "Sum of the elements = " << sum << endl;
    return 0;
}