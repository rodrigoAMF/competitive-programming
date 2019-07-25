#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l;
	string x;

	scanf("%d ", &n);

	while(n--){
		cin >> x;

		l = x.length();
		if(l > 10){
			cout << x[0] << l-2 << x[l-1] << "\n";
		}else{
			cout << x << "\n";
		}
	}

	return 0;
}