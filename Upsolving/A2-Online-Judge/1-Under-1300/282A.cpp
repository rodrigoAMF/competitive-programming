#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int x = 0;
	string op;

	cin >> n;

	while(n--){
		cin >> op;
		if(op[0] == '+' || op[2] == '+'){
			x++;
		}else{
			x--;
		}
	}
	cout << x << "\n";

	return 0;
}