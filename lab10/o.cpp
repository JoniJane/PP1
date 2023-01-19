#include <bits/stdc++.h>
using namespace std;

void f(int a){
    string y = "";
    while (a > 0){
        y = char(a % 2 + 48) + y;
        a /= 2;
    }
    cout << y << endl;    
}

int main(){
    int n, a;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i){
        cin >> a;
        v.push_back(a);
    }
    for_each(v.begin(), v.end(), f);
}