#include <iostream>

using namespace std;

int n,cnt=0;
int arr[100000], digit[10] = {0,1,2,3,4,5,6,7,8,9}, arr_new[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int k=0;k<10;k++) {
        for(int j=0;j<n;j++){
            if(digit[k]==arr[j]) {
                arr_new[cnt]=arr[j];
                cnt++;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        cout << arr_new[i] << ' ';
    }

    return 0;
}
