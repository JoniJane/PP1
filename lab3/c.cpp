#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = INT_MIN;
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(max < a[i]) {
        max = a[i];
        }
    }
    cout << max;
    return 0;
}