#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,k;
	cin >> n;
	vector <int> v;
	set <int> s;
	for(int i = 0;i < n; i++){
		cin >> a;
		k = s.size();
		s.insert(a);
		if(k != s.size()){
			v.push_back(a);
		}
	}
	do{
		for(int i = 0; i < v.size();i++){
			cout << v[i] << ' ';
		}
		cout << endl;
	} while(next_permutation(v.begin(),v.end()));
}