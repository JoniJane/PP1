#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m;
    vector <int> v1, v2;
  
    for (int i = 0; i < n; ++i) {
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < m; ++i) {
        cin >> a;
        v2.push_back(a);
    }
  
    vector <int> :: iterator it;
    it = unique(v1.begin(), v1.end());
    v1.resize(distance(v1.begin(), it));

    it = unique(v2.begin(), v2.end());
    v2.resize(distance(v2.begin(), it));

    vector <int> res;

    for (int i = 0; i < min(v1.size(), v2.size()); ++i) {
        res.push_back(v1[i]);
        res.push_back(v2[i]);
    }

    if (v1.size() < v2.size()) {
        for (int i = v1.size(); i < v2.size(); ++i) {
            res.push_back(v2[i]);
        }
    } 
    else {
        for (int i = v2.size(); i < v1.size(); ++i) {
            res.push_back(v1[i]);
        }
    }
    it = unique(res.begin(), res.end());
    res.resize(distance(res.begin(), it));

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}