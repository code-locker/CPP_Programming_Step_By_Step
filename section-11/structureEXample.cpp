#include <iostream>

using namespace std;
struct person{
    char name[20];
    int age;
    int salary;
    string city;
};
int main(){
    person p;
    cout<<"Enter below details of the person:"<<endl;
    cout <<"Name:"<<endl;
    cin.getline(p.name,sizeof(p.name));
    cout <<"Age:"<<endl;
    cin>>p.age;
    cout <<"Salary:"<<endl;
    cin>>p.salary;
    cout <<"City:"<<endl;
    cin>>p.city;

    cout<<"Entered details:"<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"Age:"<<p.age<<endl;
    cout<<"Salary:"<<p.salary<<endl;
    cout<<"City:"<<p.city<<endl;

    person *ptr = &p;
    cout<<"Entered details using struct pointer:"<<endl;
    cout<<"Name:"<<(*ptr).name<<endl;
    cout<<"Age:"<<(*ptr).age<<endl;
    cout<<"Salary:"<<(*ptr).salary<<endl;
    cout<<"City:"<<(*ptr).city<<endl;
    ptr = NULL;
    return 0;
}