#include <iostream>
using namespace std;

int main () {
    char ab;
    cin >> ab;

    if(ab >= 'A' && ab <= 'Z') {
        cout << "1";
        }
        else if(ab >= 'a' && ab <= 'z') {
            cout << "0";
        }
        else {
            cout << "-1";
        }
}

/*char ab;
cout<<"Enter any character: ";
cin>>ab;
 
if(ab>=65&&ab<=90)
cout<<endl<<"1";
else if(ab>=97&&ab<=122)
cout<<endl<<"0";
else if(ab>=48&&ab<=57)
cout<<endl<<"-1";*/

