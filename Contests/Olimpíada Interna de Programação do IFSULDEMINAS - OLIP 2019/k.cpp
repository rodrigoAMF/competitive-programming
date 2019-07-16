#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, contadorVogais, contadorConsoantes;
	int letrasRepetidas[26];
	memset(letrasRepetidas, -1, sizeof letrasRepetidas);
	string nomeLinguagem, novaPalavra;
	nomeLinguagem = "";
	contadorConsoantes = contadorVogais = 0;

	vector<string> novasPalavras;

	cin >> n;

	int nLivros;
	while(n--){
		novaPalavra = "";
		cin >> nLivros;
		string livros[nLivros];
		cin.ignore();

		for(int i = 0; i < nLivros; i++){
			getline(cin, livros[i]);
			novaPalavra += tolower(livros[i][0]);
			if(letrasRepetidas[tolower(livros[i][0]) - 'a'] == -1){
				if(tolower(livros[i][0]) == 'a' || tolower(livros[i][0]) == 'e' || tolower(livros[i][0]) == 'i' || tolower(livros[i][0]) == 'o' || tolower(livros[i][0]) == 'u'){
					contadorVogais++;
				}else{
					contadorConsoantes++;
				}
				letrasRepetidas[tolower(livros[i][0]) - 'a'] = 1;
			}
		}
		novasPalavras.push_back(novaPalavra);

		nomeLinguagem += toupper(livros[0][0]);

		for(int i = 0; i < nLivros; i++){
			
		}
	}

	int totalLetras = contadorConsoantes + contadorVogais;
	double tempoAprender;
	if(contadorConsoantes != 0){
		tempoAprender = ((double)totalLetras + (double)contadorVogais)/(double)contadorConsoantes;
	}
	

	cout << "Nome da Linguagem: " << nomeLinguagem << "\n";
	cout << "Lista de Palavras:\n";
	for(vector<string>::iterator it = novasPalavras.begin(); it != novasPalavras.end(); ++it){
		cout << *it << "\n";
	}
	cout << "Numero de Vogais: " << contadorVogais << "\n";
	cout << "Numero de Consantes: " << contadorConsoantes << "\n";
	cout << "Numero Total de Letras: " << totalLetras << "\n";
	if(contadorConsoantes != 0){
		printf("Tempo para aprender: %.1lf horas\n", tempoAprender);
	}else{
		cout << "Linguagem Ruim\n";
	}
	

	return 0;
}