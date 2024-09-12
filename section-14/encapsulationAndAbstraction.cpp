#include <iostream>

using namespace std;

class encap{
    private:
        int num;
    public:
        void setNum(int n){
            this->num = n;
        }
        int getNum(){
            return this->num;
        }
};

int main(){
    encap en;
    en.setNum(10);
    cout << "Number is " << en.getNum() << endl;
    return 0;
}