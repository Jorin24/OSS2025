#include <iostream>
using namespace std;

int main() {
    int N,num[100];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> num[i];
    }
    for(int i=0;i<N;i++)
    {
        cout << num[i]*num[i] << " ";
    }
    return 0;
}