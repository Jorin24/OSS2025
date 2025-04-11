#include <iostream>
#include <string>
#include <list>


using namespace std;

int n, m;
string s;
list<char>l;
list<char>::iterator it;


int main() {
    cin >> n >> m;
    cin >> s;

    char arr[n+1];

    s.copy(arr,s.length()+1);           // 식빵 s를 배열 arr로 옮김
    for(int i=0;i<s.length();i++) {     // arr배열에 있는 걸 리스트로 옮김
        l.push_back(arr[i]);
    }

    it = l.end();


    for (int i = 0; i < m; i++) {       // iterator 진행
        
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it,c);
        }
        else if(command == 'L') {
            it--;
        }
        else if(command == 'R') {
            it++;
        }
        else { // D
            it = l.erase(it);
        }
    }
    
    
    for(it=l.begin();it!=l.end();it++) {    // 출력
        cout << *it;
    }

    return 0;
}
