#include <iostream>
using namespace std;

int main() {
    string str, comp[5] = {"apple", "banana", "grape", "blueberry", "orange"}, test;
    int num=0;
    
    cin >> str;
    for(int i=0;i<5;i++)
    {
        test=comp[i];   
        
        if(test.substr(2,1)==str || test.substr(3,1)==str)
        {
            cout << comp[i] << endl;
            num+=1;
        }      
    }
    cout << num;
    
    return 0;
}