#include <iostream>

using namespace std;

int main(){
    string str;
    cout << "Enter the name:" << endl;
    getline(cin, str);
    cout << "Welcome " << str << "!!!" << endl;

    char st[20];

    cout << "Enter the fullname:" << endl;
    cin.getline(st, sizeof(st));
    cout << "Welcome " << st << "!!!" << endl;

    //Get the name using pointer
    cout << "Your name using pointer variable:" << endl;
    char* p = st;
    while(*p != '\0'){
        cout << *p;
        p++;
    }
    return 0;
}