#include <iostream>

using namespace std;

int main(){
    int var = 10;
    int& refVar = var;
    cout << "var = " << var << " refVar = " << refVar << endl;
    refVar = 20;
    cout << "var = " << var << " refVar = " << refVar << endl;
    var = 30;
    cout << "var = " << var << " refVar = " << refVar << endl;
    return 0;
}