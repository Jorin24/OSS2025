#include <iostream>

using namespace std;

int n;
int arr[100001];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    // 최대 힙 만들기
    for (int i = n / 2; i >= 1; i--) {
        int parent = i;
        while (parent * 2 <= n) {
            int child = parent * 2;
            if (child + 1 <= n && arr[child] < arr[child + 1]) {
                child++;
            }
            if (arr[parent] < arr[child]) {
                int temp = arr[parent];
                arr[parent] = arr[child];
                arr[child] = temp;
                parent = child;
            } else {
                break;
            }
        }
    }

    // 힙 정렬 수행
    for (int i = n; i >= 2; i--) {
        int temp = arr[1];
        arr[1] = arr[i];
        arr[i] = temp;

        int parent = 1;
        while (parent * 2 <= i - 1) {
            int child = parent * 2;
            if (child + 1 <= i - 1 && arr[child] < arr[child + 1]) {
                child++;
            }
            if (arr[parent] < arr[child]) {
                int temp2 = arr[parent];
                arr[parent] = arr[child];
                arr[child] = temp2;
                parent = child;
            } else {
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i];
        if (i != n) cout << " ";
    }
    cout << "\n";

    return 0;
}
