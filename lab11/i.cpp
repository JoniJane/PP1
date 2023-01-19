#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do {
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "JOJO";
}