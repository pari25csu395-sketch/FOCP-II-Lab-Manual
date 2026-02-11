#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    
    cout << "A and B before swap in fucntion" << a << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "A and B after swap in function" << a << b;

}

 int main(){

    int x,y;
    cout << "provide 2 integers" << endl ;
    cin >> x >> y;
    cout << "X and Y in main before function call" << x << y;
    swap(x,y); //calling
    cout << "X and Y in main after funtion call" << x << y;
    return -1;
}
