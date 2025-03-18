#include <iostream>

using namespace std;

int N;
int Fib(int n) {
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return Fib(n-2)+Fib(n-1);
}

int main() {
    cin >> N;
    cout << Fib(N);
    

    return 0;
}