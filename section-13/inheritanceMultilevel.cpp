#include <iostream>

using namespace std;
class A{
    public: 
        void display(){
            cout << "Class A" << endl;
        }
};

class B: public A{
    public:
        void displayB(){
            cout << "Class B" << endl;
        }
};

class C : public B{

};

int main(){
    C c;
    c.display(); 
    // Since class C doesn't have display(),
    // even class B doesn't have display() fundction,
    // Class A display() method is called in above line.
    c.displayB();
    return 0;
}