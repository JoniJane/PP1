#include <iostream>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    /*vector <int> v;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }*/
    int max = INT_MIN;
    map<int,int> m;
    int a;
    for(int i = 0; i < n; ++i) {
        cin >> a;
        m[a]++;
        if(max < m[a]) max = m[a];
    }
    

}