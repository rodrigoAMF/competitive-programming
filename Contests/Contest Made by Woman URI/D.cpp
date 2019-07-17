#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

// declara conjuntos
set<long int> a, b;
set<pair<long int,long int> > conjuntos;
long int cc;

void geraConjuntos(long int n){
	for(set<long int>::iterator it = a.begin(); it != a.end(); ++it){
		for(set<long int>::iterator it2 = b.begin(); it2 != b.end(); ++it2){
			conjuntos.insert(make_pair(*it, *it2));
		}
	}
	
	for(set<long int>::iterator it = b.begin(); it != b.end(); ++it){
		for(set<long int>::iterator it2 = a.begin(); it2 != a.end(); ++it2){
			conjuntos.insert(make_pair(*it, *it2));
		}
	}

    for(set< pair<long int,long int> >::iterator it=conjuntos.begin(); it!=conjuntos.end(); ++it)
    {
    	if(__gcd(it->first, it->second) == 1)
    		cc++;
    }
	
}

int main(){
	long int n, aux;

	while(true){
		cin >> n;

		if(n == 0) break;

		// le o conjunto a
		forn(i, n){
			cin >> aux;
			a.insert(aux);
		}
		// le o conjunto b
		forn(i, n){
			cin >> aux;
			b.insert(aux);
		}
		/*
		set<int>::iterator it;
		for(it = a.begin(); it != a.end(); ++it){
			cout << *it << " ";
		}
		cout << endl;
		for(it = b.begin(); it != b.end(); ++it){
			cout << *it << " ";
		}
		cout << endl;
		*/
		

		// zera o contador de conjuntos;
		cc = 0;
	    // Backtracking para gerar conjuntos
		geraConjuntos(n);
		cout << cc << endl;

		a.clear();
		b.clear();
		conjuntos.clear();

	}

	return 0;
}