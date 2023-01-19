#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    map <string, int> m;

    for(int i = 1; i <= n; ++i) {
        cin >> s;
        if(!m[s]) // если заданный элемент еще не вводился то его индекс сохраняется
        m[s] = i; // вторая пара ровняется индексу
    }// 3 ab ab cd
    /*
    ab 1
    cd 3
    */
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it -> first << ' ' << it -> second << endl;
    }
}