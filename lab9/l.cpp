#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair <int,int> p[501];
    
    for(int i = 0; i < n; ++i) {
        int k, l;
        cin >> k >> l;
        p[i].first =  k + l; // сравнивается сумма k l
        p[i].second = i + 1; // сохраняет его индекс
    }
    sort(p, p + n); // сортируют их по сумме p[i].first
    for(int i = 0; i < n; ++i) {
        cout << p[i].second << ' ';
    }
    
}