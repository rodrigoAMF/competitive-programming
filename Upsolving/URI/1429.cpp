#include <bits/stdc++.h>

using namespace std;

int fat(int n){
	if(n == 1){
		return 1;
	}
	return n * fat(n - 1);
}

int main(){
	int n, n_digitos, ans;

	while(1){
		cin >> n;

		if(n == 0){
			break;
		}

		n_digitos = ceil(log10(n))+1;

		ans = 0;

		for(int i = 0; i < n_digitos; i++){
			int digito = n%10;
			n = ceil(n/10);

			ans += digito * fat(i + 1);
		}

		cout << ans << endl;
	}
	
	

	return 0;
}