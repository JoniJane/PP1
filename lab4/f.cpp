#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, a[n][n],max = INT_MIN, posi = 0, posj = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
        cin >> a[i][j];
            if(max < a[i][j]) {
                max = a[i][j];
                posi = i + 1;
                posj = j + 1;
            }
        }
    }
    cout << posi << ' ' << posj;
}