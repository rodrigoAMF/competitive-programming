#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;


typedef pair<int, int> ii;

void dijkstra( const vector< vector<ii> >& g, int v, vector<int>& dist ) {
	int d, cost, w; set<ii> Q;
	dist[v] = 0; Q.insert( ii(0, v) );
	while( !Q.empty() ) {
		ii top = *Q.begin();
		Q.erase( Q.begin() ); v = top.second; d = top.first;
		forn(i,g[v].sz) {
			w = g[v][i].second; cost = g[v][i].first;
			if ( dist[v] + cost < dist[w] ) {
				if ( dist[w] != INF ) 
					Q.erase( Q.find( ii( dist[w], w ) ) );
				dist[w] = dist[v] + cost; Q.insert( ii( dist[w], w ) );
			}
		}
	}
}

int main(){

	return 0;
}