#include <bits/stdc++.h>

// Valores
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

// Atalhos
#define l length()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

#define MAX 501

using namespace std;

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> ii;

int graph[MAX][MAX]; // -1 means "no edge"
int vertices; // number of vertices (at most 128)
int dist[MAX];

// Compares 2 vertices first by distance and then by vertex number
typedef struct {
	bool operator()( int u, int v ) const {
		return make_pair( dist[u], u ) < make_pair( dist[v], v );
	}
}ltDist;

void dijkstra( int s ) {
	for( int i = 0; i < vertices; i++ ) dist[i] = INF;
	dist[s] = 0;
	set< int, ltDist > q;
	q.insert( s );
	while( !q.empty() ) {
		int u = *q.begin(); // like u = q.front()
		q.erase( q.begin() ); // like q.pop()
		for( int v = 0; v < vertices; v++ ) {
			if( graph[u][v] != -1) {
				int newDist = dist[u] + graph[u][v];
				if( newDist < dist[v] ) { // ralaxation
					if( q.count( v ) ) q.erase( v );
					dist[v] = newDist;
					q.insert( v );
				}
			}
		}
	}
}

int main(){
	int n, e;

	while(cin >> n >> e){
		if(n == e && n == 0)
			break;
		forn(i, 501){
			forn(j, 501){
				graph[i][j] = -1;
			}
		}
		forn(i, e){
			int x,y,h;

			cin >> x >> y >> h;

			graph[x-1][y-1] = h;
		}
		vertices = 501;
		int k;

		cin >> k;

		forn(i, k){
			int o, d;
			cin >> o >> d;

			dijkstra(o-1);
			cout << dist[d-1] << endl;
		}
	}

	return 0;
}