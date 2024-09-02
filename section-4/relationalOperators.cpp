#include <iostream>

using namespace std;

int main(){
    int a = 20, b= 10;
    cout << "a = " << a << "\t b = " << b << endl; 
    cout << a << "==" << b << "=" << (a==b) << endl;
    cout << a << "<=" << b << "=" << (a<=b) << endl;
    cout << a << ">=" << b << "=" << (a>=b) << endl;
    cout << a << "!=" << b << "=" << (a!=b) << endl;
    cout << a << ">" << b << "=" << (a>b) << endl;
    cout << a << "<" << b << "=" << (a<b) << endl;

    return 0;
}