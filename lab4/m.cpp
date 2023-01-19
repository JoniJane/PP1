#include <iostream>
using namespace std;
/*
3
1 2 3
8 9 4
7 6 5*/
int main() {
    int n;  
    cin >> n;

    int a[n][n];
    int firstRow = 0, firstCol = 0;
    int lastRow = n - 1, lastCol = n - 1;
    int val = 1;

    while(true) {
        for(int i = firstCol; i <= lastCol; i++) {
            a[firstRow][i] = val;
            val++;
        }
        if(firstRow == lastRow) break;
        firstRow++;
        for(int i = firstRow; i <= lastRow; i++) {
            a[i][lastCol] = val;
            val++;
        }
        if(firstCol == lastCol) break;
        lastCol--;
        for(int i = lastCol; i >= firstCol; i--) {
            a[lastRow][i] = val;
            val++;
        }
        if(firstRow == lastRow) break;
        lastRow--;
        for(int i = lastRow; i >= firstRow; i--) {
            a[i][firstCol] = val;
            val++;
        }
        if(firstCol == lastCol) break;
        firstCol++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}