#include <bits/stdc++.h>
using namespace std;

void f(string s, int n) {
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i])) {
            cnt++;
        }
        else if(cnt >= n){
            cout << "Valid";
            exit(0);
        }
        else{ 
            cnt = 0;
        }
    }
    cout << "Not valid";
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    f(s,n);
}