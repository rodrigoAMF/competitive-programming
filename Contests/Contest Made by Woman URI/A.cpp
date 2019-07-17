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
	map<string, char> alfabeto;
	alfabeto["."] = 'a';
	alfabeto[".."] = 'b';
	alfabeto["..."] = 'c';
	alfabeto[". ."] = 'd';
	alfabeto[".. .."] = 'e';
	alfabeto["... ..."] = 'f';
	alfabeto[". . ."] = 'g';
	alfabeto[".. .. .."] = 'h';
	alfabeto["... ... ..."] = 'i';
	alfabeto[". . . ."] = 'j';
	alfabeto[".. .. .. .."] = 'k';
	alfabeto["... ... ... ..."] = 'l';
	alfabeto[". . . . ."] = 'm';
	alfabeto[".. .. .. .. .."] = 'n';
	alfabeto["... ... ... ... ..."] = 'o';
	alfabeto[". . . . . ."] = 'p';
	alfabeto[".. .. .. .. .. .."] = 'q';
	alfabeto["... ... ... ... ... ..."] = 'r';
	alfabeto[". . . . . . ."] = 's';
	alfabeto[".. .. .. .. .. .. .."] = 't';
	alfabeto["... ... ... ... ... ... ..."] = 'u';
	alfabeto[". . . . . . . ."] = 'v';
	alfabeto[".. .. .. .. .. .. .. .."] = 'w';
	alfabeto["... ... ... ... ... ... ... ..."] = 'x';
	alfabeto[". . . . . . . . ."] = 'y';
	alfabeto[".. .. .. .. .. .. .. .. .."] = 'z';

	int n;

	while(cin >> n){
		cin.ignore();
		string line;


		forn(i , n){
			getline(cin, line);
			cout << alfabeto[line] << endl;
		}
	}
	



	return 0;
}