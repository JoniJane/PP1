#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(sqrt(n) == floor(sqrt(n))){
        cout << "Yes";
    } else {
        cout << "No";
    }
}