#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef struct{
	string nome;
	int tecnica;
}Banda;

bool comparator(Banda a, Banda b){
	if(a.tecnica > b.tecnica)
		return true;
	return false;
}

int main(){
	int n, dia;

	cin >> n >> dia;
	cin.ignore();

	Banda bandas[n];
	string s;
	for(int i = 0; i < n; i++){
		getline(cin, s);
		bandas[i].nome = s;
		s.erase(remove(s.begin(), s.end(), ' '), s.end());
		bandas[i].tecnica = s.length();
	}

	sort(bandas, bandas+n, comparator);

	int letrasUsadas[26];
	memset(letrasUsadas, -1, sizeof letrasUsadas);
	long long somaTecnica = 0;
	int contadorBandasUsadas = 0;
	for(int i = 0; i < n && contadorBandasUsadas < dia; i++){
		if(letrasUsadas[toupper(bandas[i].nome[0]) - 'A'] == -1){
			somaTecnica += bandas[i].tecnica;
			letrasUsadas[toupper(bandas[i].nome[0]) - 'A'] = 1;
			contadorBandasUsadas++;
		}
	}

	cout << somaTecnica << "\n";

	return 0;
}