#include <bits/stdc++.h>

using namespace std;

bool f(int a) {
    int V = abs(a);
    if (V <= 1) {
        return false;
    } 
    for (int i = 2; i <= sqrt(V); ++i) {
        if (V % i == 0) return false;
    }
    return true;
}

int main() {
    int n, a; 
    cin >> n;
    vector <int> v;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.push_back(a);
    }

    cout << count_if(v.begin(), v.end(), f);
}