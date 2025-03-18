#include <iostream>

using namespace std;

int N;
int even(int N) {
    if(N==2) return 2;
    return N+even(N-2);
}
int odd(int N) {
    if(N==1) return 1;
    return N+odd(N-2);
}

int main() {
    cin >> N;
    if(N%2==0) cout << even(N);
    else cout << odd(N);

    return 0;
}