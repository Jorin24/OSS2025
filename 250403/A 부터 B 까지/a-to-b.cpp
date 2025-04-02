#include <iostream>
using namespace std;

int main() {
    int A, B, adj;
    cin >> A >> B;
    cout << A << ' ';
    while(A<B) {
        if(A%2==0) {
            A+=3;
            if(A>=B) break;
            else cout << A << ' ';
            
        }
        else if(A%2==1) {
            A*=2;
            if(A>=B) break;
            else cout << A << ' ';
        }
    }
    if(A==B) cout << B;
    

    return 0;
}