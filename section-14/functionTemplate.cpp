#include <iostream>

using namespace std;

template <class T>
T MAX(T n1, T n2){
    return (n1>n2)?n1:n2;
}

int main(){
    int a , b;
    cout << "Enter two integers." << endl;
    cin >> a >> b;
    cout << "MAX(" << a << "," << b << ")=" << MAX(a,b) << endl;
    float c, d;
    cout << "Enter two Floating numbers." << endl;
    cin >> c >> d;
    cout << "MAX(" << c << "," << d << ")=" << MAX(c,d) << endl;
    char e , f;
    cout << "Enter two characters." << endl;
    cin >> e >> f;
    cout << "MAX(" << e << "," << f << ")=" << MAX(e,f) << endl;
    return 0;
}