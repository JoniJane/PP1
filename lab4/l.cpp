#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], sum = 0, min = INT_MAX, posj, posi;
     
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
                posj = j + 1;
                posi = i + 1;
            }
        }
        sum += min;
        cout << posi << ";"<< posj << endl;  
        min = INT_MAX;
    }
    cout << endl << "Their sum:" << endl << sum;
}
