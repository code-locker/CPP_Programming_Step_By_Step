#include <iostream>

using namespace std;

class Example{
    private:
        int variable;
    public:
        void setVariable(){
            variable = 10;
        }
        int getVariable(){
            return variable;
        }
        Example();
        ~Example();
};

Example::Example(){
    cout << "Object is being created." << endl;
}

Example::~Example(){
    cout << "Object is being deleted." << endl;
}

int main(){
    Example ex;
    ex.setVariable();
    cout << "Value of a variable is " << ex.getVariable() << endl;
    return 0;
}