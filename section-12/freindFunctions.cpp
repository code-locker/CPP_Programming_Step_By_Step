#include <iostream>

using namespace std;
class A{
    private:
        int numberInt;
    protected:
        float numberFloat;
    public:
        friend class B;
        A(){
            numberInt = 1;
            numberFloat = 1.1;
        }
};

class B{
    public:
        void display(A& a){
            cout << "Integer number = " << a.numberInt << " Float number = " << a.numberFloat << endl;
        }
};

int main(){
    A obj_a;
    B obj_b;
    obj_b.display(obj_a);
    return 0;
}