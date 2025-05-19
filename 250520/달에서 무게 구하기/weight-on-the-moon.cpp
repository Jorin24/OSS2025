#include <iostream>
using namespace std;

int main() {
    int weight=13;
    float moon_weight=0.165;

    cout << fixed;
    cout.precision(6);
    cout << weight << " " << "*" << ' ' << moon_weight << ' ' << "=" << ' ' << weight*moon_weight;
    return 0;
}