#include <bits/stdc++.h>
using namespace std;

int main(){
	map <pair<pair<string,int>,pair<string,int> >, int> mp;
	int n;
	cin >> n;
	string st1, st2;
	int n1 ,n2;
	for(int i = 0;i<n;i++){
		cin >> st1 >> n1 >> st2 >> n2;
		mp[make_pair(make_pair(st1,n1),make_pair(st2,n2))] = n1 + n2;
	}
	map <pair<pair<string,int>,pair<string,int> >, int>:: iterator it;
	for(it = mp.begin(); it!= mp.end(); it++){
		cout<<((*it).first.first.first)<<" and "<<((*it).first.second.first)<<" "<<(*it).second<<endl;
	}
	
}