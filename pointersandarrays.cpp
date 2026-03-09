#include <iostream>
using namespace std;

int main(){
     int marks[] = {23,56,78,76,99};

     int* p = marks;
      
     cout << *(p++) << endl;
     cout << *(++p) << endl;

    
    cout << "Value of marks[0] is : " << *p << endl;
    cout << "Value of marks[1] is : " << *p+1 << endl;
    cout << "Value of marks[2] is : " << *p+2 << endl;
    cout << "Value of marks[3] is : " << *p+3 << endl;
    cout << "Value of marks[4] is : " << *p+4 << endl;



    

    return 0;
    
}