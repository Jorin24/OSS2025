#include <iostream>
using namespace std;

int main() {
    int N, arr[100];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    for(int i=N-1;i>=0;i--)
    {
        if(arr[i]%2==0) cout << arr[i] << " ";
    }
    
    return 0;
}