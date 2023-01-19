#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n; cin >> n;                                                      
  int i=1;

  for(; i*i<=n; ++i)
  { cout << i*i << "\n";}
}