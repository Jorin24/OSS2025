#include <iostream>
using namespace std;

int main() {
    int weight=13;
    double perc=0.165;
    cout << fixed;
    cout.precision(6);
    cout << weight << " * " << perc << " = " << (double)weight*perc;
    
    return 0;
}