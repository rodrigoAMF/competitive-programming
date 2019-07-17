#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	vector<int> fila;

	for(int i = 0; i < n; i++){
		int atual;
		cin >> atual;
		fila.push_back(atual);
	}

	int n2;
	map<int, bool> excluidos;

	cin >> n2;

	while(n2--){
		int atual;
		cin >> atual;
		excluidos[atual] = true;
	}
	for(int i = 0; i < n; i++){
		if(!excluidos[fila.at(i)])
			if(i != n-1)
				cout << fila.at(i) << " ";
			else
				cout << fila.at(i) << endl;
	}

	return 0;
}