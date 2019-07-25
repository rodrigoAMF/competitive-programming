#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	string fila, filaNova;

	scanf("%d %d ", &n, &t);
	cin >> fila;

	while(t--){
		filaNova = fila;
		for(int i = 0; i < n-1; i++){
			if(fila[i] == 'B' && fila[i+1] == 'G'){
				filaNova[i] = 'G';
				filaNova[i+1] = 'B';
			}
		}
		fila = filaNova;
	}

	cout << fila << endl;


	return 0;
}