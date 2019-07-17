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
	int p, n, prox, atual;
	bool possivel = true;

	cin >> p >> n;

	forn(i, n){
		cin >> prox;
		if(i == 0){
			atual = prox;
			continue;
		}
		if(prox < atual){
			if(prox < (atual-p)){
				possivel = false;
				break;
			}
		}else{
			if(prox > (atual+p)){
				possivel = false;
				break;
			}
		}
		atual = prox;
	}

	if(possivel){
		cout << "YOU WIN" << endl;
	}else{
		cout << "GAME OVER" << endl;
	}

    return 0;
}