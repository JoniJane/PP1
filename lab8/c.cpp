#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    cin >> l >> r; 
    reverse(v.begin() + l, v.begin() + r + 1);
    /*swap(v[l],v[r]); меняет элементы в заданных индексах*/
    for(int i = 0; i < v.size(); ++i) {   
        cout << v[i] << ' ';
    }
}