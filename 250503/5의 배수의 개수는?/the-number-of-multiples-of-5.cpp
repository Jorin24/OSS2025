#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int score=0;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(arr[i][j]%5==0) score++;
        }
    }

    cout << score;

    return 0;
}