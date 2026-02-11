#include <iostream>
using namespace std;
int main(){
    int marks;
    int choice;
    cout << "Select an option (1-3): \n";
    cout << "1. Marks are above 90\n";
    cout << "2. Marks are between (90-70)\n";
    cout << "3.Marks are below 70\n";
    cin >> choice;

    cout << "What are your marks ?\n";
    cin >> marks;
    switch(choice){
        case 1:
        cout << "your grade is A\n";
            break;
        case 2:
            break;
        cout << "your grade is B\n";
            break;
        case 3:
        cout << "your grade is c\n";
        default:
        cout << "INVALID INPUT";
        break;
    }
    return 0;
}