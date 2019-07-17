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

	while(cin >> n){
		list<int> livros;
		int contador = 0, atual;

		forn(i, n){
			cin >> atual;
			if(find(livros.begin(), livros.end(), atual) != livros.end())
				continue;
			if(livros.size() != 4){
				livros.push_back(atual);
				contador++;
			}else if(find(livros.begin(), livros.end(), atual) == livros.end()){
				livros.pop_front();
				livros.push_back(atual);
				contador++;
			}		
		}
		cout << contador << endl;
	}

	return 0;
}