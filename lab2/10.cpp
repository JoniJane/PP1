#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k; 
    cin >> n >> k;
    int res=0;

    if(n<k)
    { res=2; }

    else if(n>k && (2*n)%k==0)
    { res=2*n/k; }

    else if(n>k && (2*n)%k>0)
    { res=((2*n)/k)+1; }
    cout << res;

    return 0;
}