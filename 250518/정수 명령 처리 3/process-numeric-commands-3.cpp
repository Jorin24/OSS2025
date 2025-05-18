#include <iostream>
#include <string>

using namespace std;

int N;
string cmd[10000];
int num[10000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
        }
    }

    int deque[20000]; // 충분히 큰 배열
    int front = 10000, back = 10000; // 시작점은 중간

    for (int i = 0; i < N; i++) {
        if (cmd[i] == "push_front") {
            deque[--front] = num[i];
        } else if (cmd[i] == "push_back") {
            deque[back++] = num[i];
        } else if (cmd[i] == "pop_front") {
            if (front == back) {
                cout << -1 << '\n';
            } else {
                cout << deque[front++] << '\n';
            }
        } else if (cmd[i] == "pop_back") {
            if (front == back) {
                cout << -1 << '\n';
            } else {
                cout << deque[--back] << '\n';
            }
        } else if (cmd[i] == "size") {
            cout << back - front << '\n';
        } else if (cmd[i] == "empty") {
            cout << (front == back ? 1 : 0) << '\n';
        } else if (cmd[i] == "front") {
            if (front == back) {
                cout << -1 << '\n';
            } else {
                cout << deque[front] << '\n';
            }
        } else if (cmd[i] == "back") {
            if (front == back) {
                cout << -1 << '\n';
            } else {
                cout << deque[back - 1] << '\n';
            }
        }
    }

    return 0;
}
