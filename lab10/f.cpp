#include <bits/stdc++.h>
using namespace std;

int main(){
	map <int, double> m;
	int n;
	cin >> n;
	int a1, a2, f, cr;
	double ksum = 0;
	for(int i = 0; i < 50; i++){
		m[i] = 0;
	}
	double cnt = 1.0;
	for(int i = 50; i < 100; i+=5){
		m[i] = cnt;
		m[i+1] = cnt;
		m[i+2] = cnt;
		m[i+3] = cnt;
		m[i+4] = cnt;
		cnt += 1.0/3.0;
	}
	m[100] = 4.0;
	double gpa = 0;
	for(int i = 0; i < n; i++){
		cin >> a1 >> a2 >> f >> cr;
		ksum += cr;
		if(a1 + a2 < 30 || f < 20){
			gpa += m[0];
		} else {
			gpa += (m[a1+a2+f]*cr);
		}
	}
	cout << gpa/ksum << endl;
	return 0;
}