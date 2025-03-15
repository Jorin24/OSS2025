#include <iostream>
using namespace std;

int main() {
    int num[10], thr_mul=0, fiv_mul=0;
    for(int i=0;i<10;i++)
    {
        cin >> num[i];
        if(num[i]%3==0) thr_mul+=1;
        if(num[i]%5==0) fiv_mul+=1;
    }
    cout << thr_mul << " " << fiv_mul;

    return 0;
}