#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
	string line, cobol;
	cobol = "COBOL";

	while(getline(cin, line)){
		int contador, ch;
		string palavras[5];

		contador = ch = 0;
		palavras[0] = palavras[1] = palavras[2] = palavras[3] = palavras[4] = "";
		forn(i, line.size()){
			if(line[i] == '-'){
				ch++;
			}else{
				palavras[ch]+=line[i];
			}
		}

		//cout << palavras[1][palavras[0].size()-1] << endl;

		forn(i, 5){
			//cout << (char)toupper(palavras[i][palavras[i].size()-1]) << " " << cobol[i] << endl;
			if(toupper(palavras[i][0]) == cobol[i] || (char)toupper(palavras[i][palavras[i].size()-1]) == cobol[i]){
				contador++;
			}
		}
		if(contador == 5){
			cout << "GRACE HOPPER" << endl;
		}else{
			cout << "BUG" << endl;
		}
		
		
	}
	return 0;
}