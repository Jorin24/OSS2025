#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int j=N;j>0;j--) {
        for(int i=0;i<N;i++) {
            cout << "* ";
        }
        N--;
        cout << endl;
    }
    return 0;
}