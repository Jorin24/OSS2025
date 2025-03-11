#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    
    int A,B,sum;
    double aver;
    
    cin >> A >> B;
    sum = A+B;
    aver= (double)sum/2;
    cout << sum << " " << aver;
    return 0;
}