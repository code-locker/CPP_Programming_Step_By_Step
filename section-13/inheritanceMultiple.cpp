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

class paintCost{
    public:
        int getCost(int area){
            return area * 50;
        }
};

class rectangle: public shape,public paintCost{
    public:
        int Area(){
            return length*width;
        }
};

int main(){
    rectangle r;
    r.setLength(5);
    r.setWidth(6);
    int a = r.Area();
    cout << "Area of a rectangle is " << a << endl;
    cout << "Paint cost of a rectangle is " << r.getCost(a) << endl;
    return 0;
}