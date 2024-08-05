#include <iostream>
#include "externExample.hpp"

using namespace std;

extern int a;	 // int var; -> declaration and definition 
				// extern int var; -> declaration 

int main() 
{ 
	cout << a << endl; 

    return 0; 
}
