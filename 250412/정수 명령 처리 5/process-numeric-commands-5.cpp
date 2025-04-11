#include <iostream>
#include <vector>
using namespace std;

int N;
string command[10000];
int num[10000];
vector<int> arr;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
            if(command[i] == "push_back") {
                arr.push_back(num[i]);
            }
            else {
                cout << arr[num[i]-1] << endl;
            }
        }
        else if(command[i]=="pop_back") arr.pop_back();
        else if(command[i]=="size") cout << arr.size() << endl;
    }

    
    // Please write your code here.

    return 0;
}
