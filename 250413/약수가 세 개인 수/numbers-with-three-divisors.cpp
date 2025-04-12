#include <iostream>

using namespace std;

int start, last,num=0;

int main() {
    cin >> start >> last;
    for(int i=start;i<=last;i++) {
        int cnt=0;
        for(int j=2;j<i;j++) {
            if(i%j==0) cnt+=1;
        }
        if(cnt == 1) num++;
    }
    cout << num;

    return 0;
}
