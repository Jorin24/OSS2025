#include <iostream>
using namespace std;


int main() {
    string One, Two;
    cin >> One >> Two;
    if(One.length() == Two.length()) cout << "same";
    else if(One.length() > Two.length()) cout << One << " " << One.length();
    else if(One.length() < Two.length()) cout << Two << " " << Two.length();
    return 0;
}