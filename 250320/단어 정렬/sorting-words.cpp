#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str[100];
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> str[i];
    }
    sort(str,str+n);
    for(int i=0;i<n;i++) {
        cout << str[i] << endl;
    }
    
    

    

    return 0;
}