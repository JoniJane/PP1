#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum = 0;
    int min = INT_MAX;
    int pos, pos1;
     
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
        cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; ++j) {
        for(int i = 0; i < n; ++i) {
            if(min > a[i][j]) {
                min = a[i][j];
                pos = i + 1;
                pos1 = j + 1;
            }
        }
        sum += min;
        cout << pos << ";"<< pos1 << endl;  
        min = INT_MAX;
    }
    cout << endl << "Their sum:" << endl << sum;
}