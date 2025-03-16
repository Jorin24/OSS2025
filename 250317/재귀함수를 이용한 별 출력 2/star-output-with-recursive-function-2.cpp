#include <iostream>

using namespace std;

int n;
void star(int n) {
    if(n==0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        cout << "* ";
    }
    cout << endl;
    star(n-1);
    for(int i=0;i<n;i++)
    {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    cin >> n;
    star(n);

    return 0;
}