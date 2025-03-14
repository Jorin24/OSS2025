#include <iostream>
using namespace std;

int main() {
    int A,B,C,temp;
    cin >> A >> B >> C;
    if(A<=B)
    {
        if(A<=C)
        {
            if(B<=C)
            {
                cout << B;
            }
            else cout << C;
        }
        else cout << A;
        
    }
    else if (A>=B)
    {
        if(B>=C) cout << B;
        else if(B<=C)
        {
            if(A>=C) cout << C;
            else cout << A;
        }
    }
    
    
    return 0;
}