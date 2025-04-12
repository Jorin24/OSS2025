#include <iostream>
using namespace std;

int main() {
    int N,a,b;
    cin >> N;
    for(int i=0;i<N;i++) {
        int sum=0;
        cin >> a >> b;
        for(int j=a;j<=b;j++) {
            if(j%2==0) sum+=j;
        }
        cout << sum << endl;
    }
    return 0;
}