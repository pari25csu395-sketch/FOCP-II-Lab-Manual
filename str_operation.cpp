#include <iostream> 
using namespace std;
#include <string>

int main(){
    string st = "Pari";
    cout << st.size() << " " << st.length() << endl; // both give 4
    cout << st[0] << st.at(1) << endl; // P a
    cout << st.front() << st.back() << endl; // P i
    st += "Aggarwal"; // append
    st.append(" :)"); // another way
    cout<<st;
    st.insert(4, "K.");
    cout<<st;
    st.erase(4, 3);
    cout<<st;   // remove 3 chars starting at 4
    st.clear();
    cout<<st;  //remove all content
    st = "Pari Aggarwal";
    cout << st.find("Aggarwal") << endl;
    cout << st.rfind("a") << endl;  //last occurence
    string sub = st.substr(0,4); //Pari
    string a= "Apple";
    string b= "Mango";
    if(a == b) cout << "Equal";
    if(a != b) cout << "Not equal";
    if(a < b) cout << "Apple comes before Mango";

    return 0;
}
