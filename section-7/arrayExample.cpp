#include <iostream>

using namespace std;


int main(){
    int totalSubjects;
    cout << "How many subject marks you want to store?" << endl;
    cin >> totalSubjects;

    int subject[totalSubjects];
    float average = 0;
    for (int i=0 ;i<totalSubjects;i++){
        cout <<"Enter the marks in subject " << i << " : ";
        cin >> subject[i];
        average += subject[i];
        cout << endl;
    }
    average /=totalSubjects;
    cout << "Average marks =" << average << endl;

    return 0;
}