#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
string data[100];

int main() {
    stack<int> s;
    int left=0, right=0;

    cin >> str;
    
    for(int i=0;str[i]!='\0';i++) {
        if(str[i] == '(') left++;
        else right++;
    }

    if(left==right) cout << "Yes";
    else cout << "No";

    return 0;
}
