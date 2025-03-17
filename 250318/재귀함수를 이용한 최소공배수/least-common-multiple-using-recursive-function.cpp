#include <iostream>

using namespace std;

int n,temp=1,test;
int arr[10];
int lcm(int n, int arr[]) { // 마지막에 반환하는 수가 최소공배수
    
    if(n==0)
    {
        test=1;
        return temp;
    }
    else if(temp%arr[n-1]==0)
    {
        lcm(n-1,arr);
        if(test==1)
        {
            return temp;
        }
        return 0;
    }
    else
    {
        temp++;
        return 0;
    }
        
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(test==0)
    {
        test=lcm(n,arr);
    }
    cout << test;

    return 0;
}