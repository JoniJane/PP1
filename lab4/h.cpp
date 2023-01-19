#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, m, a[n][m], min = INT_MAX, pos = 0;
    cin >> n >> m;
     
    for(int i = 0; i < n; ++i) {
        int sum = 0;
        for(int j = 0; j < m; ++j) {
        cin >> a[i][j];
        sum += a[i][j];
        }
        if(min > sum) {
            min = sum;
            pos = i + 1;
        }
    }
    cout << pos;
}