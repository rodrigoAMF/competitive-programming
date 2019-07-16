#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

vector<ii> adj[401];

int main(){
	int n;

	int acertos[4];
	memset(acertos, 0, sizeof acertos);

	cin >> n;
	cin.ignore();

	while(n--){
		string s, palpites[4], vencedores[4];
		getline(cin, s);
		
		for(int i = 0 ; i < 4; i++){
			getline(cin, palpites[i]);
		}
		getline(cin, s);
		for(int i = 0; i < 4; i++){
			getline(cin, vencedores[i]);
			if(palpites[i] == vencedores[i]){
				acertos[i] = 1;
			}
		}
	}
	bool inicio = true;
	for(int i = 0; i < 4; i++){
		if(acertos[i] != 1){
			if(inicio){
				cout << (i+1);
				inicio = false;
			}else{
				cout << " " << (i+1);
			}
			
		}
	}
	cout << "\n";


	return 0;
}