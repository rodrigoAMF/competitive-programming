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
	string nome;
	double ts, tb, ta;
	double tss, tsb, tsa;
	double rs, rb, ra;

	rs = rb = ra = 0.0;

	cin >> n;

	forn(i, n){
		double s,b,a,ss,sb,sa;
		cin >> nome;
		cin >> s >> b >> a;
		cin >> ss >> sb >> sa;

		if(i == 0){
			ts = s;
			tb = b;
			ta = a;
			tss = ss;
			tsb = sb;
			tsa = sa;
		}else{
			ts += s;
			tb += b;
			ta += a;
			tss += ss;
			tsb += sb;
			tsa += sa;
		}
	}

	rs = (tss/ts)*100;
	rb = (tsb/tb)*100;
	ra = (tsa/ta)*100;


	cout << fixed << setprecision(2);

	cout << "Pontos de Saque: " << rs << " %." << endl;
	cout << "Pontos de Bloqueio: " << rb << " %." << endl;
	cout << "Pontos de Ataque: " << ra << " %." << endl;

    return 0;
}