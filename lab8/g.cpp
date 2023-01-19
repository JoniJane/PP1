#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
  if(n == 1) return false;
  for(int i = 2; i < sqrt(n); i++){
    if(n % i == 0) return false;
  }
  return true;
}

int main(){
  int n, k, a, cnt = 0;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  cin >> k;

  for(int i = 0; i < v.size(); i++)
    if(v[i] > k && isPrime(v[i]))
      cnt++;

  cout << cnt;


  return 0;
}
   /* int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int cnt = 0;
    for(int i = 2; i < v.size(); ++i) {
    if(v[i] == 2 || v[i] == 3 || v[i] == 5 || v[i] == 7 && v[i] > k) cnt++;
    if(v[i] % 2 !=0 && v[i] % 3 !=0 && v[i] % 5 !=0 && v[i] % 7 !=0 && v[i] > k ) cnt++;
    }
    cout << cnt;
}*/