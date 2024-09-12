#include <iostream>

using namespace std;

inline int MAX(int x, int y){
    return (x>y)?x:y;
}

int main(){
    cout << "MAX(10,20):" << MAX(10,20) << endl;
    cout << "MAX(0,20):" << MAX(0,20) << endl;
    cout << "MAX(10,0):" << MAX(10,0) << endl;
    return 0;
}