#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
	int m = 2*n-1, b = n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if( j + 1 >= b && j <= m - b){
				cout << "*";
			}
			else{
				cout << ".";
			}
        }
		cout << endl;
		b--;
     }
}
