#include <iostream>

using namespace std;

int n;
int arr[100000];
int temp[100000]; // 병합용 임시 배열

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int size = 1;
    while (size < n) {
        int start = 0;
        while (start < n) {
            int mid = start + size - 1;
            int end = start + 2 * size - 1;
            if (mid >= n) break;
            if (end >= n) end = n - 1;

            int i = start;
            int j = mid + 1;
            int k = start;

            while (i <= mid && j <= end) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                } else {
                    temp[k++] = arr[j++];
                }
            }

            while (i <= mid) {
                temp[k++] = arr[i++];
            }

            while (j <= end) {
                temp[k++] = arr[j++];
            }

            for (int l = start; l <= end; l++) {
                arr[l] = temp[l];
            }

            start += 2 * size;
        }
        size *= 2;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
