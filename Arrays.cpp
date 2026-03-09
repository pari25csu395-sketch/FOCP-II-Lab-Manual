#include <iostream>
using namespace std;

int main() {

    int marks[] = {34,67,89,90,100};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    // we can aslo change the value of a position in a array

    marks[3] = 54;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // using for loop

    for (int i = 0 ; i <6 ; i ++){
        cout << "marks at "<< i << " position is : " << marks[i] << endl;
    }
   
    

    return 0;
}