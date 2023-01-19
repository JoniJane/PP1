#include <iostream>
using namespace std;

int main() 
{
 int m; cin >> m;
 int n=0; 
 int k=0;
 for(int i=0;i<m; ++i)
 { cin >> n;

  if(n%10==7)
  { k++;}
  else if(n==7)
  { k++;}
 }
   cout << k;
}