#include <iostream>
using namespace std;

int main() {
    unsigned int A,B,sum=0;
    cin >> A >> B;
    for(;A<=B;A++)
    {
        if(A%2==0) sum+=A;   
    }
    cout << sum;
    return 0;
}