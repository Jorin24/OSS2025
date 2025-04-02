#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    do {
        cout << A << ' ';
        if(A%2==1) A*=2;
        else if(A%2==0) A+=3;    
    } while(A<=B);

    return 0;
}