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
	int n, q;

	while(true){
		vector<int> p;

		cin >> n >> q;
		if(!cin) break;

		forn(i, n){
			int aux;
			cin >> aux;
			p.push_back(aux);
		}
		sort(p.begin(), p.end(), greater<int>());
		//sort(p.begin(), p.end());
		forn(i, q){
			int aux;
			cin >> aux;
			
			cout << p[aux-1] << endl;
		}
	}
	
    return 0;
}