#include <iostream>

using namespace std;

int main(){
    int var = 10;
    int *ptr;
    ptr = &var;
    cout << "Value of var=" << var << endl;
    cout << "Address of var=" << ptr << endl;
    cout << "Value of var using pointer variable=" << *ptr << endl;
    // NULL pointer(pointer pointing to nothing)
    ptr=NULL;
    cout << "Address of var=" << ptr << endl;

    //Void pointer
    float f = 2.3;
    void *p = &f;
    //Cast void* to float* to dereference it
    cout << "Address = " << p << " and value = " <<*(float*)p << endl;
    p=NULL;
    return 0;
}