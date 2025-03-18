#include <iostream>

using namespace std;

int a, b, c;
int pl(int n) {
    while(n>0)
    {
        return n%10 + pl(n/=10);
    }
    return 0;
}

int main() {
    cin >> a >> b >> c;
    
    cout << pl(a*b*c);

    return 0;
}