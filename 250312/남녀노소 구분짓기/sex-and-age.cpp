#include <iostream>
using namespace std;

int main() {
    int Gender, age;
    cin>>Gender;
    cin>>age;

    if(gender==0)
    {
        if(age>=19) cout<<"MAN";
        else cout<<"BOY";

    }
    else
    {
        if(age>=19) cout<<"WOMAN";
        else cout<<"GIRL";
    }
    return 0;
}