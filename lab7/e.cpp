#include <bits/stdc++.h>
using namespace std;
bool f(int n, int i){
    if(i >= 63) {
        return false;
    }
    if(pow(2, i) == n) {
        return true;
    }
    return f(n, i+1);

}
int main() {
    int n;
    cin >> n;
    if(f(n,0)) cout << "Yes";
    else cout << "No";
}