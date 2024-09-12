#include <iostream>

using namespace std;

int main(){
    cout << "Factorial(5) using for loop Example:" << endl;
    int fact = 1;
    for(int i=1; i<=5; i++){
        fact=fact*i;
    }
    cout << "Factorial(5)=" << fact << endl;
    cout << "Factorial(5) using while loop Example:" << endl;
    fact = 1;
    int num = 5;
    while(num){
        fact = fact * num;
        num--;
    }
    cout << "Factorial(5)=" << fact << endl;
    cout << "Factorial(5) using do-while loop Example:" << endl;
    fact = 1;
    num = 1;
    do{
        fact =fact*num;
        num++;
    }while(num<=5);
    cout << "Factorial(5)=" << fact << endl;
    return 0;
}