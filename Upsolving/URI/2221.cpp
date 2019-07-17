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
	int n;

	int b, a1, d1, l1, a2, d2, l2; 
	double vg1, vg2;

	while(true){
		cin >> n;
		if(!cin) break;
		forn(i, n){
			cin >> b;
			cin >> a1 >> d1 >> l1;
			cin >> a2 >> d2 >> l2;

			vg1 = (a1+d1)/2.0;
			vg2 = (a2+d2)/2.0;
			if(l1%2 == 0)
				vg1+=b;
			if(l2%2 == 0)
				vg2+=b;
			if(vg1 > vg2){
				cout << "Dabriel" << endl;
			}else if(vg1 < vg2){
				cout << "Guarte" << endl;
			}else{
				cout << "Empate" << endl;
			}
		}
	}


    return 0;
}