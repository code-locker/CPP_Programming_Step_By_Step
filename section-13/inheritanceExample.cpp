#include <iostream>

using namespace std;

class shape{
    public:
        void setLength(int l){
            length = l;
        }
        void setWidth(int w){
            width = w;
        }
    protected:
        int length;
        int width;
};

class rectangle: public shape{
    public:
        int Area(){
            return length*width;
        }
};

int main(){
    rectangle r;
    r.setLength(5);
    r.setWidth(6);
    cout << "Area of a rectangle is " << r.Area() << endl;
    return 0;
}