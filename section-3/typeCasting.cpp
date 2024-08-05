#include <iostream>

using namespace std;

int main(){
    int num;
    double temperature = 27.9;

    //Type casting is done by the compiler, you may get warning message
    num = temperature;
    cout << "num = " << num << endl;

    // C based type-casting
    num = (int)temperature;
    cout << "num = " << num << endl;

    //C++ based type-casting
    num = int(temperature);
    cout << "num = " << num << endl;
    return 0;

}