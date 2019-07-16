#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string x;

	scanf("%d ", &n);

	while(n--){
		cin >> x;
		reverse(x.begin(), x.end()); 
		for(int i = 0; i < x.length(); ++i){
			if(islower(x[i])){
				cout << x[i];
			}
		}
		cout << "\n";
	}

	return 0;
}