#include <bits/stdc++.h>

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Valores
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

// Atalhos
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int main(){
	forn(i, 39){
		printf("-");
	}
	cout << endl;

	forn(j, 5){
		forn(i, 39){
			if(i == 0 || i == 38)
				printf("|");
			else if(i == 1 && j==0){
				printf("x = 35");
				i+=5;
			}else if(i == 16 && j==2){
				printf("x = 35");
				i+=5;
			}else if(i == 32 && j==4){
				printf("x = 35");
				i+=5;
			}else
				printf(" ");
		}
		cout << endl;
	}
	

	forn(i, 39){
		printf("-");
	}
	cout << endl;

	return 0;
}