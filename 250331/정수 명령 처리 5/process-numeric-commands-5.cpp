#include <iostream>
#include <vector>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;
    vector<int> num;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
        if (command[i] == "pop_back") {
            v.push_back();
        }
        if (command[i] == "size") {
            cout << v.size() << endl;
        }
    }

    

    return 0;
}
