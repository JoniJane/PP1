#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    map <string, int> m;
    string answer = "";
    for(int i = 0; i < n; ++i){
        cin >> s;
        if(m[s] == 0) {m[s]++;
        answer += "new user added\n";
        }
        else if(m[s] > 0) answer += "user already exists\n";
    }
    cout << answer;
}