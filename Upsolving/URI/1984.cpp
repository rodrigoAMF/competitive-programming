#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define PI (double)acos(-1.0)
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	int n;

	cin >> n;

	int p[n];
	double q[n], total = 0;

	forn(i, n){
		cin >> p[i] >> q[i];
		if(p[i] == 1001){
			total+=q[i]*1.5;
		}else if(p[i] == 1002){
			total+=q[i]*2.5;
		}else if(p[i] == 1003){
			total+=q[i]*3.5;
		}else if(p[i] == 1004){
			total+=q[i]*4.5;
		}else {
			total+=q[i]*5.5;
		}
	} 
	cout << fixed << setprecision(2) << total << endl;
	return 0;
}