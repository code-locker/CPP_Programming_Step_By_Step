#include <iostream>

using namespace std;

class areaOfCircle{
    private:
        float PI=3.14;
    public:
        float radius;
        float area=0.0;
        void printArea(){
            area = PI * radius * radius;
            cout << "Area of a circle with radius " << radius << " = " << area << endl;
        }
        void readRadius();
    protected:
        int simpleTest;
};

class ProtectedTest:public areaOfCircle{
    public:
        void init_var(int arg){
            this->simpleTest = arg;
        }
        void display(){
            cout << "Protected access specifier examle. Value of variable = " << simpleTest << endl;
        }
};

void areaOfCircle::readRadius(){
    cout << "What is the radius of the circle?" << endl;
    cin >> radius;
}

int main(){
    areaOfCircle obj;
    obj.readRadius();
    obj.printArea();
    ProtectedTest t;
    t.init_var(10);
    t.display();
    return 0;
}