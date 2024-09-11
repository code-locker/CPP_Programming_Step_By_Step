#include <iostream>


using namespace std;

int main(){
    int a , b;

    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    try{
        if(b!=0){
            float res = (float)a/b;
            if(res < 0)
                throw b;
            cout << a << "/" << b << " = " << res << endl;
        }
        else
            throw 'e';
    }
    catch(char st){
        cout << "Division by zero." << endl;
    }
    catch(int e){
        cout << "Division result is less than 0." << endl;
    }
    catch(...){
        cout << "Something else.." << endl;
    }
    return 0;
}