#include <iostream>
using namespace std;

int main() {
    int N, k=0;
    cin >> N;
    
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=i+k;j++) {
            cout << "*";
        }
        k+=1;
        cout << endl;
    }
    
    return 0;
}