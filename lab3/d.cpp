#include <iostream>

#include <climits>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[n];
    int max = INT_MIN;
    int pos = 0;

    for(int i = 1; i < n; ++i) {
        cin >> a[i];

        if(max < a[i]){
            max = a[i];
            pos = i;
        }
    }
    cout << pos;

    return 0;
}