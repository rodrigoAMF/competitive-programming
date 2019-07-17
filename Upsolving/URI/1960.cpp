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
    int n, aux;
 	string saida;

    cin >> n;

	while(n > 0){
		if(n >= 900 && n < 1000){
			saida.push_back('C');
			saida.push_back('M');
			n-=900;
		}else if(n >= 500){
			saida.push_back('D');
			n-=500;
		}else if(n >= 400 && n < 500){
			saida.push_back('C');
			saida.push_back('D');
			n-=400;
		}else if(n >= 100){
			saida.push_back('C');
			n-=100;
		}else if(n >= 90 && n < 100){
			saida.push_back('X');
			saida.push_back('C');
			n-=90;
		}else if(n >= 50){
			saida.push_back('L');
			n-=50;
		}else if(n >= 40 && n < 50){
			saida.push_back('X');
			saida.push_back('L');
			n-=40;
		}else if(n >= 10){
			saida.push_back('X');
			n-=10;
		}else if(n == 9){
			saida.push_back('I');
			saida.push_back('X');
			n-=9;
		}else if(n >= 5){
			saida.push_back('V');
			n-=5;
		}else if(n == 4){
			saida.push_back('I');
			saida.push_back('V');
			n-=4;
		}else if(n >= 1){
			saida.push_back('I');
			n-=1;
		}
	}

	cout << saida << endl;

    return 0;
}