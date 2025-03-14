#include <iostream>
using namespace std;

int main() {
    int A,B,C,temp;
    cin >> A >> B >> C;
    if(A>B)
    {
        temp=A;
        A=B;
        B=temp;
        if(B>C) cout << C;
        else cout << B;
    }
    else if(B>A)
    {
        if(C>B) cout << B;
        else cout << A;
    }
    
    return 0;
}