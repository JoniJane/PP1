#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum=0;
    int i=1;
    
    for(; i<=n; ++i)
    sum=sum+i;

    cout << sum;
}