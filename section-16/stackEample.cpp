#include <iostream>

using namespace std;

class stack{
    private:
        int top;
        int stackSize;
        int a[5];
    public:
        stack(){
            top = -1;
            stackSize = 5;
        }

        void display();
        void push(int x);
        void pop();
};

void stack::display(){
    cout << "Stack elements : " << endl;
    for (int i=0; i <= top; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void stack::push(int x){
    if(top == stackSize-1){
        cout << "Stack is overflow." << endl;
    }
    else{
        a[++top] = x;
    }
    display();
}

void stack::pop(){
    if(top == -1){
        cout << "Stack is underflow." << endl;
    }
    else{
        top--;
    }
    display();
}

int main(){
    stack s;
    int ch;
    while(ch!=3){
        cout << "What is your choice?\n1.PUSH\n2.POP\n3.Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "Enter the number." << endl;
            cin >> num;
            s.push(num);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            break;
        
        default:
            cout << "Invalid choice." << endl;
            break;
        }
        
    }
    return 0;
}