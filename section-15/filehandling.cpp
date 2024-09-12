#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream fileObj;
    fileObj.open("text.txt",ios::out);
    if(!fileObj){
        cout << "Failed to create the file." << endl; 
    }
    else{
        cout << "File is created." << endl;
        fileObj << "File handling in C++." << endl;
        fileObj.close();
    }
    return 0;
}