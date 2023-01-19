#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int k;
    int max = 0;
    for( int i=0; i<n; i++)
    {
        cin >> k;
        if (max < k){
            max = k;
        }
    }
    cout << max;
}