#include <iostream>
using namespace std;

int main() {
    int A,B,C,temp;
    cin >> A >> B >> C;
    if(A>=B)
    {
        if(A<=C)
        {
            temp=A;
            A=B;
            B=temp;
            if(B>C) cout << C;
            else cout << B;
        }
        else if(A>=C)
        {
            if(B>=C) 
            {
                cout << B;
            }
            else cout << C;
        }
    }
    else if(B>=A)
    {
        if(C>=B) cout << B;
        else cout << A;
    }
    
    return 0;
}