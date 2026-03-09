#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void chk_binary(void);
    void compliment(void);
    void display(void); 


};

void binary :: read(void){
    cout << " Enter any binary number:" << endl;
    cin >> s;
}

void binary :: chk_binary(void){
    for (int i = 0; i < s.length() ; i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << " incorrect binary format!" << endl;
            exit(0);
        }
    }

}

void binary :: compliment(void){
    for (int i = 0; i < s.length() ; i++){
        if (s.at(i) == '1'){

            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}

void binary :: display(void){
    cout << "Displaying your binary number:" << endl;
    for (int i = 0; i < s.length() ; i++){
        cout << s.at(i);
    }
    cout << endl;
}

int main() {

    binary a;
    a.read();
    a.chk_binary();
    a.compliment();
    a.display();

return 0;
}