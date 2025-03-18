#include <iostream>

using namespace std;

int N,cnt;
int to_one(int N) {
    
    if(N==1)
        return cnt;
    else if(N%2==0)
    {
        N/=2;
        cnt++;
        to_one(N);
    }
    else if(N%2==1)
    {
        N/=3;
        cnt++;
        to_one(N);
    }
    return cnt;
}
int main() {
    cin >> N;
    cout << to_one(N);

    return 0;
}