#include <iostream>
using namespace std;

int main() {
    int a,b,c,sum,aver;
    
    cin>>a>>b>>c;
    sum=a+b+c;
    aver=sum/3;

    cout<<sum<<"\n"<<aver<<"\n"<<sum-aver;
    return 0;
}