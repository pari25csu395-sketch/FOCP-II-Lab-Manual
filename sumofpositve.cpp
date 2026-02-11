#include <iostream>
using namespace std;
int main(){
    int nums;
    int n;
    int sum=0;
    cout << "enter the count of n:";
    cin >> n;

    for (int i ; i<n ; i++){
        cin >> nums;
        if (nums<0){
            continue;
        }
        else{
            sum= sum+nums;
        }
    }
    cout << " sum is" << sum;
    return 0;
}