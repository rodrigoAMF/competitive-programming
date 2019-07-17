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
	int atual, anterior, n, pos = 0;

	cin >> n;

	forn(i, n){
		cin >> atual;
		if(i != 0){
			if(atual < anterior){
				pos = i+1;
				break;
			}
		}
		anterior = atual;
	}

	cout << pos << endl;

    return 0;
}