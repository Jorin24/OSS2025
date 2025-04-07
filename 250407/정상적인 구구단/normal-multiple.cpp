#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            cout << i << " * " << j << " = " << i*j;
            if(j==N) continue;
            else {
                cout << ", ";
            }
        }
        cout << endl;
    }
    return 0;
}