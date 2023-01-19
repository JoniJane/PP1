#include <iostream>
using namespace std;
int main()
{
  int n; cin >> n;
  int m; 
  int a=0;
  int b=0; 

  for(int i=0;i<n; ++i )
  { cin >> m;
 
  if(m%2==0)
  { a++; }
  else
  { b++; }
  }
  cout << a << " " << b;
}