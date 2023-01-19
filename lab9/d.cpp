/*#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map <int, int> v;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v[a]++;
    }

    map <int,int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it) {
        if( it -> first == k) cout << it -> second << ' ';
        return 0;
    }
    cout << 0;
    }
    */
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map <int, int> v;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v[a]++;
    }
    cout << v[k];
}