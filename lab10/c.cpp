#include <bits/stdc++.h>
using namespace std;

bool f(char top, char c){
	if(top == '0') return false;
	int k = (top -'0')*10 + (c-'0');
	if(int(sqrt(k)) == sqrt(k)){
		return true;
	}else{
		return false;
	}
}
int main(){
	string s;
	cin >> s;
	stack<char> st;
	for(int i = 0; i < s.size(); ++i){
		if(!st.empty()){
			if(f(st.top(),s[i])){
				st.pop();
			}else{
				st.push(s[i]);
			}
		}else{
			st.push(s[i]);
		}
	}
	if(st.empty()){
		cout << "Stack is empty";
		return 0;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}

	return 0;
}