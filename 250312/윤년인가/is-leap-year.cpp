#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    if(Y%4==0)
        if(Y%100==0 && Y%400!=0) cout << "false";
        else cout << "true";
    else cout << "false";
    return 0;
}