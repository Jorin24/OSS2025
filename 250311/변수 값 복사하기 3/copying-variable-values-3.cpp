#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a=1;
    b=5;
    c=3;

    a=c;
    a=a+c;
    b=b-c;

    printf("%d\n%d\n%d",a,b,c);

    return 0;
}