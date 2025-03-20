#include <iostream>

using namespace std;

int N,i=2;
int f(int n) {
    if(n==1) {
        return 2;
    }
    else if(n==2) {
        return 4;
    }
    return f(n-2)*f(n-1)%100;
}
int main() {
    cin >> N;
    cout << f(N);
    

    return 0;
}