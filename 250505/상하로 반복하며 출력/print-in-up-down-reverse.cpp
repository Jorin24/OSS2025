#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int arr[N+1][N+1];

    
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(i%2==1) {
                arr[j][i]=j;
            }
            else {
                arr[j][i]=N-j+1;
            }
        }
    }

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}