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
	int n1, n2;
	while(true){
		cin >> n1 >> n2;

		if(n1 == n2 && n1 == 0)
			break;

		bool maior = false;

		int n = 0;
		int carry = 0;
		while(n1 > 0 || n2 > 0){
			if(carry > 0)
				n++;
			if(n1 == 0 || n2 == 0){
				if(n1 == 0){
					int d2 = n2%10;
					n2/=10;

					carry = d2+carry;
				}
				if(n2 == 0){
					int d1 = n1%10;
					n1/=10;

					carry = d1+carry;
				}
			}else{
				int d1 = n1%10;
				int d2 = n2%10;
				n1/=10;
				n2/=10;

				carry = d1+d2+carry;
			}
			if(carry >= 10){
				carry = 1;
			}else
				carry = 0;
		}
		if(carry > 0)
			n++;
		if(n <= 0)
			printf("No carry operation.\n");
		else if(n == 1){
			printf("%d carry operation.\n", n);
		}else{
			printf("%d carry operations.\n", n);
		}
	}

	return 0;
}