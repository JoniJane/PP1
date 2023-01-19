#include <bits/stdc++.h>
using namespace std;

/*int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='z') s[i] = 'a';
        else s[i] = char(s[i] + 1);
    }
    cout << s;
}*/
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size() ; ++i) {
        if(s[i] == s.size() - 1) cout << s[i];
        else if(i%2!=0 && s[i] != s.size() - 1) cout << '*' << s[i] << '*';
        else cout << s[i];        
    }

}