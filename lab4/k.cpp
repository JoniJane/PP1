#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum = 0;
     
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
        cin >> a[i][j];
        sum += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " <<  sum << endl;
        sum = 0;
    }
    for(int j = 0; j < m; ++j) {
        for(int i = 0; i < n; ++i) {
        sum += a[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << sum << endl;
        sum = 0;
    }
    cout << endl;
}
