#include <bits/stdc++.h>

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	 
	    // For getting input from input.txt file
	    freopen("inputf.in", "r", stdin);
	 
	    // Printing the Output to output.txt file
	    freopen("outputf.in", "w", stdout);
	#endif

	string line;

	while(getline(cin, line)){
		forn(i, line.l){
			if((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122)){
				bool maiusculo;
				int pos = (int)line[i];
				if(pos <= 90){
					pos = 90 - pos;
					maiusculo = false;
				}else{
					pos = 122 - pos;
					maiusculo = true;
				}
				pos=25-pos;
				pos+=13;
				if(pos > 25)
					pos-=26;

				if(maiusculo)
					line[i] = 97 + (char)pos;
				else
					line[i] = 65 + (char)pos;
			}
		}
		cout << line << endl;
	}
	return 0;
}