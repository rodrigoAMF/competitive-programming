#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
	int n, contador;
	string linha, substring;
	substring = "oulupukk";
	
	scanf("%d ", &n);

	while(n--){
		getline(cin, linha);

		// oulupukk(8)
		for(int i = 0; i < linha.length()-8; i++){
			if(linha[i] == 'o'){
				contador = 1;
				for(int j = 1; j < 8; j++){
					if(linha[i+j] == substring[j])
						contador++;
					else
						break;
				}

				if(contador == 8){
					//cout << i-1 << " " << i+8 << endl;
					linha[i-1] = 'J';
					linha[i+8] = 'i';
				}
			}
		}

		cout << linha << endl;
	}
	return 0;
}