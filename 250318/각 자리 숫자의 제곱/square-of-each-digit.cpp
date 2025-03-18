#include <iostream>

using namespace std;

int N;
int square(int cnt, int N) {
    int pow;
    pow=(N%10)*(N%10);
    N/=10;
    if(cnt==1)
    {
        return pow;
    }
    return pow + square(cnt-1,N);    
}

int main() {
    cin >> N;
    int cnt=1,check,pow=10;
    check=N;
    while(check/pow>=1)
    {
        cnt++;
        pow*=10;
    }
    cout << square(cnt,N);
    

    return 0;
}