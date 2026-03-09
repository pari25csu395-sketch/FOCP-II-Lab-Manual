#include <iostream>
using namespace std;

struct employee // typedef before struct employee can be used
    {
        // data
        int eID;
        char favchar;
        float salary;

    }; // here ep can be used 

    int main(){

        struct employee Pari;  // ep can be used in the place of struct employee
        // for eg = ep Avni ; 
        Pari.eID = 395;
        Pari.favchar = 'B';
        Pari.salary = 5000000;

        cout << Pari.eID << endl;
        cout << Pari.favchar << endl;
        cout << Pari.salary << endl;
    }



    