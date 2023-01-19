#include <bits/stdc++.h>
using namespace std;
double f(int a, int b) {
    double c = sqrt(a*a + b*b);
    cout << setprecision(4) << c;
}

int main() {
    int a, b;
    cin >> a >> b;
    f(a,b); 
}