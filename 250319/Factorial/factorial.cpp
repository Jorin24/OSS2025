#include <iostream>

using namespace std;

int N;
int factorial(int N) {
    if(N==1)
    {
        return 1;
    }
    return (N) * factorial(N-1);
}

int main() {
    cin >> N;
    cout << factorial(N);

    return 0;
}