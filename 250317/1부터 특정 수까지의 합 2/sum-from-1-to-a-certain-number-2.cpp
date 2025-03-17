#include <iostream>

using namespace std;

int N;
int sig(int n) {
    if(n==1)
    {
        return 1;
    }    
    return sig(n-1) + n;
}

int main() {
    cin >> N;
    cout << sig(N);

    return 0;
}