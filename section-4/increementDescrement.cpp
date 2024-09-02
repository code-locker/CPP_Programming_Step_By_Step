#include <iostream>

using namespace std;

int main(){
    int i = 10;
    cout << "Pre-Increment: Value of i = " << i << " and ++i = " << ++i << endl;
    cout << "Pre-Increment: Value of i = " << i << " and --i = " << --i << endl;
    cout << "Post-Increment: Value of i = " << i << " and i++ = " << i++ << endl;
    cout << "Post-Increment: Value of i = " << i << " and i-- = " << i-- << endl;
    return 0;
}