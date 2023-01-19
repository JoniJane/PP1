#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    string s;
    queue <string> q;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> m;
        if(m == 2) q.pop();
        else {
            cin >> s;
            q.push(s);
        }
        if(q.empty()) cout << "queue is empty" << endl;
        else cout << q.front() << endl;
    }
}