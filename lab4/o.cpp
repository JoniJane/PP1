#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n][n], max = INT_MIN, posi, posj;
     
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
        cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if( i == j && max < a[i][j]) {
                max = a[i][j];
                posi = i + 1;
                posj = j + 1;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << posi << ";" << posj;   
}
    