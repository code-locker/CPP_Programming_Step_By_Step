#include <iostream>
#include <string>

using namespace std;

int main(){
    char str[]="code-locker";
    cout << "My string is :" << str << endl;

    cout << "Character in a strings are :" << endl;
    for(int i=0;i<sizeof(str)/sizeof(str[0]);i++){
        cout << str[i] << endl;
    }
    return 0;
}