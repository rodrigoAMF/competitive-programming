#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	int n;

	while(true){
		cout << "1" << endl;
		cin >> n;
		if(!cin) break;
		double dia;
		double recorde;

		forn(i, n){
			double t, d;
			cin >> t >> d;
			if(i == 0){
				dia = i+1;
				recorde = d/t;
			}else{
				if((d/t) > recorde){
					dia = i+1;
					recorde = d/t;
				}
			}
		}
		cout << dia << endl;
	}
	
	return 0;
}