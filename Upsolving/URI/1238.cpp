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
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int main(){
	string one = "one";
	string two = "two";
	string three = "three";
	int n;

	cin >> n;

	cin.ignore();

	forn(i, n){
		string p;

		cin >> p;

		if(p.length() > 3){
			cout << "3" << endl;
		}else{
			int c_one, c_two;
			c_one = c_two = 0;
			forn(i, 3){
				if(p[i] == one[i])
					c_one++;
				if(p[i] == two[i])
					c_two++;
			}
			if(c_one > c_two)
				cout << "1" << endl;
			else
				cout << "2" << endl;
		}
	}


	return 0;
}