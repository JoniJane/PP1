#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); ++i) {
        if(st.empty()) st.push(s[i]);
        else if(st.top() =='1' && s[i] == '1') st.pop();
        else st.push(s[i]); 
    }
    string s2 = "";
    while(!st.empty()) {
        s2 += st.top(); 
        st.pop();
    }
    reverse(s2.begin(), s2.end());   
    cout << s2;

}