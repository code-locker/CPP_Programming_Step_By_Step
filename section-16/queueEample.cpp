#include <iostream>

using namespace std;

#define QUEUESIZE 5

class queue{
    private:
        int rear;
        int front;
        int a[QUEUESIZE];
    public:
        queue(){
            rear=-1;
            front=0;
        }
        void enqueue( int x);
        void dequeue();
        void display();
};

void queue::enqueue(int x){
    if(rear == QUEUESIZE-1){
        cout << "Queue is full." <<endl;
    }
    else{
        a[++rear] = x;
    }
    display();
}

void queue::dequeue(){
    if(front>rear){
        cout << "Queue is empty." <<endl;
    }
    else{
        for(int i=front; i <= rear-1; i++){
            a[i] = a[i+1];
        }
        rear--;
    }
    display();
}

void queue::display(){
    cout << "Queue elements are:" << endl;
    for(int i=front; i <= rear; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout<< "front = " << front << " and rear = " << rear << endl;
}

int main(){
    queue q;
    int ch;
    while(ch!=3){
        cout << "What is your choice?\n1.enqueue\n2.dequeue\n3.Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "Enter the number." << endl;
            cin >> num;
            q.enqueue(num);
            break;
        case 2:
            q.dequeue();
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