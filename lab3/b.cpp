#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b = 0;

    for(int i = 0; i < n; ++i) {
      cin >> a[i];
      if(a[i] > 0) {
      b++; }
    }
    cout << b;
}
