#include <bits/stdc++.h> 
using namespace std;
int sum = 0;
int f(string n, int i) {
    if(i >= n.size()) { return sum; }
    sum += (n[i] - '0') / 2;

    return f(n, i+1);

}

int main() {
    string n;
    cin >> n;
    cout << f(n, 0);
}