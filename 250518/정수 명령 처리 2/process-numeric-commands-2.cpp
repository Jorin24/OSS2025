#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    queue<int> q;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
            q.push(A[i]);
        }
        if (command[i] == "pop") {
            cout << q.front() << endl;
            q.pop();
        }
        if (command[i] == "size") {
            cout << q.size() << endl;
        }
        if (command[i] == "empty") {
            if(q.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        if (command[i] == "front") {
            cout << q.front() << endl;
        }
    }

    // Please write your code here.

    return 0;
}