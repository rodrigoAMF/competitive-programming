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

	cin >> n;

	cin.ignore();

	forn(i, n){
		vector<string> lista;
		string line;

		getline(cin, line);

		stringstream ss;

		ss << line;

		while(ss >> line){
			lista.push_back(line);
		}	

		sort( lista.begin(), lista.end() );
		lista.erase( unique( lista.begin(), lista.end() ), lista.end() );

		forn(i, lista.size()){
			if(i != lista.size()-1)
				cout << lista[i] << " ";
			else 
				cout << lista[i] << endl;
		}
	}

	

	return 0;
}