#include <iostream>
using namespace std;
int main()
{
 int n; 
 cin >> n;
 int m;
 int k=0;
 for(int i=0; i<n; ++i)
 { cin >> m;
  while (m / 10 != 0){
    if (m % 10 == 0){
      k += 1;
    }
    m /=10;
  }
  }
  cout << k << endl;
}