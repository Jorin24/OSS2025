#include <iostream>

using namespace std;

int n,temp;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    /* function bubble_sort(arr[])
  set len = arr.size
  
  for i = 0 ... i < len - 1
    for j = 0 ... j < len - 1 - i
      if arr[j] > arr[j + 1]
        set tmp = arr[j]
        arr[j] = arr[j + 1]
        arr[j + 1] = tmp
  
  return arr */

    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
