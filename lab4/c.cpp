#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int neg = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];

            if(a[i][j] < 0) {
                neg++;
            }
        }
    }
    cout << neg;
}