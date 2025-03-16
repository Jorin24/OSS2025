#include <iostream>

using namespace std;

int N;
void text(int n) {
    if(n==0)
    {
        return;
    }

    text(n-1);
    cout << "HelloWorld" <<endl;
}


int main() {
    cin >> N;

    text(N);

    return 0;
}