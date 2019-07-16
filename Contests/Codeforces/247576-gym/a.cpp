#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d ", &n);

	string numero;

	for(int i = 0; i < n; i++){
		cin >> numero;

		vector<char> vetorChar(numero.begin(), numero.end());
		sort(vetorChar.begin(), vetorChar.end());
		int contadorZeros = 0;
		for(const char &c: vetorChar){
			if(c == '0'){
				contadorZeros++;
			}else if(c != '0' && contadorZeros > 0){
				cout << c;
				while(contadorZeros-- != 0)
					cout << '0';
			}else{
				cout << c;
			}
			
		}
		cout << "\n";

	}

	return 0;
}