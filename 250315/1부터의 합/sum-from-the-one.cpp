#include <iostream>
using namespace std;

int main() {
    int N,num=0;
    cin >> N;
    for(int i=1;i<=100;i++)
    {
        num+=i;
        if(num>=N)
        {
            cout << i;
            break;
        }
    }
    return 0;
}