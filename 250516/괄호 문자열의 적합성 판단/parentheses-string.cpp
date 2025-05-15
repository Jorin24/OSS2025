#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<int> s;

    // 해결방법: 만약 여는 괄호가 온다면 그것을 스택에 넣고, 닫는 괄호가 온다면 스택에 있는 여는 괄호를 빼면 됩니다.
    
    for(int i=0;i<str.length();i++) {
        if(str[i]=='(') {
            s.push(1);
        }
        if(str[i]==')') {
            if(s.size()<=0) {
                cout << "No" << endl;
                return 0;
            }
            else s.pop();
        }
    }
    if(s.empty() == 0) {            // s.empty는 비어있을 때 1. 
        cout << "No" << endl;
    }
    else cout << "Yes" << endl;
    

    return 0;
}
