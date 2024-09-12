#include <iostream>

using namespace std;
class Test{
    private:
        int number;
    public:
        void set(int num){
            this->number = num;
        }
        void display(){
            cout << "Number = "<< this->number << endl;
        }
};

int main(){
    Test tst;
    tst.set(10);
    tst.display();
    return 0;
}