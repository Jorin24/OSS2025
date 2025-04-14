#include <iostream>

using namespace std;

int n,temp,minimum;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++) {
        minimum=i;
        for(int k=i+1;k<n;k++) {
            if(arr[k] < arr[minimum]) {
                minimum=k;
            }
        }
        temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
