#include <bits/stdc++.h>

using namespace std;

int main(){
	int p, a;
	int cmax = 0;
	int cmin = 0;

	cin >> p >> a;

	int air1[a], air2[a];

	for(int i = 0; i < a; i++){
		cin >> air1[i];
		air2[i] = air1[i];
	}
	
	while(p--){
		sort(air1, air1+a);
		sort(air2, air2+a);
		int pos = 0;
		while(air1[pos] == 0){
			pos++;
		}
		cmin += air1[pos]--;
		cmax += air2[a-1]--;
	}
	cout << cmax << " " << cmin << "\n";

	return 0;
}