#include <bits/stdc++.h>
using namespace std;

int sum = 0;

int f(string s, int i) {
    if(i >= s.size()) return sum;
    sum += s[i] - '0';
    return f(s, i+1);

}

int main() {
    string s;
    cin >> s;
    cout << f(s, 0);
}