#include <bits/stdc++.h> 
using namespace std;
string s = " ";
string f(int n) {
    if(n == 0) {
        reverse(s.begin(), s.end());
        return s;
    }
    s += char(n%2 +'0');
    return f(n/2);

}

int main() {
    int n;
    cin >> n;
    cout << f(n);
}