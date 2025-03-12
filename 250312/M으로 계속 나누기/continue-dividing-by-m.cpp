#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    while(N>0)
    {
        cout<<N<<endl;
        N/=M;
    }
    
    return 0;
}
