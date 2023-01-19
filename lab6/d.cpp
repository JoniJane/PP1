#include <bits/stdc++.h>
using namespace std;

void f(int *a, int n, int x) { 
    for(int i = 0; i < n; ++ i) {
        if(a[i] == x) {
            cout << "Yes";
            exit(0);
        }
    }
        cout << "No";
        exit(0);
        
}
int main () {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    f(a, n, x);

}