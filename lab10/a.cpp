#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    string s;
    vector <string> v1;
    vector <int> v2;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        v1.push_back(s);
        cin >> m;
        v2.push_back(m);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; ++i) {
        cout << v1[i] << ' ' << v2[i] << endl;
    }
}