#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[501];
    map <int, int> mp;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		mp[a[i]] = 1;
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < i; ++j)
			if(mp[a[i]^a[j]]) cnt++;
	cout << cnt << endl;
	return 0;
}