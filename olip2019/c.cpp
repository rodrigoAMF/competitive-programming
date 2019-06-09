#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

vector<ii> adj[401];

bool ehLetra(char s){
	if(tolower(s) >= 'a' && tolower(s) <= 'z'){
		return true;
	}
	return false;
}

int main(){
	int n;

	cin >> n;
	cin.ignore();

	while(n--){
		string s;
		int maiorIntervalo = 0;
		getline(cin, s);
			
		string busca = "";
		int contadorIntervalo = 0;
		for(int i = 0; i < (int)s.length(); i++){
			if(ehLetra(s[i])) {
				busca+=tolower(s[i]);
				contadorIntervalo++;
			}else{
				if(busca == "jogo" || busca == "perdi"){
					if(contadorIntervalo > maiorIntervalo){
						maiorIntervalo = contadorIntervalo;
					}
					contadorIntervalo = 0;
				}
				busca="";
			}
		}

		cout << maiorIntervalo << "\n";
	}

	return 0;
}