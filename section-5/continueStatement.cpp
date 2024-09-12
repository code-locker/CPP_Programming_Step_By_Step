#include <iostream>

using namespace std;

int main(){
    cout << "Dispkay odd numbers between 0-10:" << endl;
    for(int i=0;i<=10;i++){
        if(i%2==0)
            continue;
        else
            cout << i << endl;
    }
    return 0;
}