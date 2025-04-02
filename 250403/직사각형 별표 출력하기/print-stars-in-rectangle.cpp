#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}