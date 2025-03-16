#include <iostream>

using namespace std;

int N;
void first(int n) {
    if(n==0)
    {
        return;
    }
    first(n-1);
    cout << n << " ";
    n+=1;
}

void second(int n) {
    if(n==0)
    {
        return;
    }
    cout << n << " ";
    second(n-1);
}

int main() {
    cin >> N;
    first(N);
    cout << "" << endl;
    second(N);
    

    return 0;
}