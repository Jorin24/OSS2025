#include <iostream>

using namespace std;

int n, temp;
int arr[100];
void max(int n,int arr[]) {
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= arr[n-1])
        {   
            temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
        }
    }
    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max(n,arr);
    cout << arr[n-1];

    return 0;
}