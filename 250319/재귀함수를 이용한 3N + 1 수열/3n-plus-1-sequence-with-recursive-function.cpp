#include <iostream>

using namespace std;

int n,cnt=0;
int Go(int n) {
    if(n==1)
    {
        return cnt;
    }
    else if(n%2==0)
    {
        cnt++;
        return Go(n/=2);
    }
    else if(n%2==1)
    {
        cnt++;
        return Go(n=n*3+1);
    }
    return cnt;
}

int main() {
    cin >> n;
    cout << Go(n);

    return 0;
}