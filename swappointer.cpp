#include <iostream>
using namespace std;

int swap(int a , int b){ // will not swap the values.
    int temp = a;
    a = b;
    temp = b;
}

int swappointer(int* a , int* b){ // will swap the values  as it will take the address from here
   int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 2 , y = 1;
    swap(x,y);
    cout << x << y << endl;
    swappointer(&x, &y);
    cout << x << y;

return 0;
}