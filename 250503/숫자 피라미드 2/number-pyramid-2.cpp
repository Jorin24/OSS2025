#include <iostream>
using namespace std;

int main() {
    int N,num=1; 
    cin >> N;
    for(int i=1;i<=N;i++) {
        for(int j=0;j<i;j++) {
            cout << num << ' ';
            num++;
        }
        cout << endl;
    }

    return 0;
}