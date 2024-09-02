#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout << b << "+" << a << "=" << b+a << endl;
    cout << b << "-" << a << "=" << b-a << endl;
    cout << b << "/" << a << "=" << b/a << endl;
    cout << b << "%" << a << "=" << b%a << endl;
    cout << b << "*" << a << "=" << b*a << endl;
    cout << b << "++" << "=" << b++ << endl;
    cout << a << "--" << "=" << a-- << endl;
    cout << "--" << b << "=" << --b << endl;
    cout << "++" << b << "=" << ++b << endl;
    return 0;
}