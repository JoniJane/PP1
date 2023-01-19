#include <iostream>
using namespace std;

int main() {

int n,m;
cin >> n >> m;
int res=n+(m/100)+(m%10);
cout << res;
return 0;
}