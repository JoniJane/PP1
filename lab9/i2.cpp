#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    set <string> s;
    queue <string> q;
    for(int i = 1; i <= n; ++i) {
        cin >> str;
        s.insert(str);
    }
    for(int i = 0; i < str.size(); ++i) {
        if(q.empty()) q.push(str);
        else if(q.front()  == str[i]) cout << "user already exists\n";
        else cout << "new user added\n";
    }
}