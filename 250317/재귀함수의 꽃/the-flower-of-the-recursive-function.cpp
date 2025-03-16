#include <iostream>

using namespace std;

int N;
void count(int n) {
    if(n==0)
    {
        return;
    }
    cout << n << " ";
    count(n-1);
    cout << n << " ";

}

int main() {
    cin >> N;
    count(N);

    return 0;
}