#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;

	cin >> n;

	if(n == 0){
		cout << "1" << endl;

		return 0;
	}

	long long matriz[n+1][(2*n)+1];

	for(int i = 0; i < n+1; i++){
		for(int j = 0; j < (2*n)+1; j++){
			matriz[i][j] = 0;
		}
	}
	int inicioLinha, fimLinha;

	matriz[0][n] = 1;
	inicioLinha = n-1;
	fimLinha = n+1;
	long long contador = 0;

	for(int i = 1; i <= n; i++){
		contador = 0;
		for(int j = inicioLinha; j <= fimLinha; j++){
			if(j == inicioLinha || j == fimLinha){
				matriz[i][j] = 1;
			}else{
				matriz[i][j] = matriz[i-1][j] + matriz[i-1][j-1] + matriz[i-1][j+1];
			}
			contador += matriz[i][j];
		}
		inicioLinha--;
		fimLinha++;
	}
	/*
	for(int i = 0; i < n+1; i++){
		
		for(int j = 0; j < (2*n)+1; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	*/

	cout << contador << endl;

	return 0;
}