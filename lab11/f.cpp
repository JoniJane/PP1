#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a, b, k;
	cin >> a >> b >> k;
	int q = 0;
    for (int i = min(a, b); i >= 1; i--){
		if ((a % i) == 0 && (b % i) == 0) {
            q++;
        }
		if (q == k){
			cout << i << endl;
			return 0;
		}
	}
}