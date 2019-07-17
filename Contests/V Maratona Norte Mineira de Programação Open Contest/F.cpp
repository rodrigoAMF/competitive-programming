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
	int n, k, t;
	while(cin >> n >> k >> t){
		vector<pair<int, int> > plantas;

		forn(i, n){
			plantas.PB(MP(i+1, t-1));
		}
		
		forn(i, k){
			int l,r;
			cin >> l >> r;
			
			for(int j = 0; j < plantas.size(); j++){
				if(plantas.at(j).F >= l && plantas.at(j).F <= r){
					plantas.at(j).S = t;
				}else{
					plantas.at(j).S--;
					if(plantas.at(j).S < 0){
						plantas.erase(plantas.begin()+j);
					}
				}
			}
		}
		/*forn(i, plantas.size()){
			if(plantas.at(i).S <= 0)
				plantas.erase(plantas.begin()+i);
		}*/
		
		if(plantas.size() == 0){
			cout << "0" << endl;
		}else{
			cout << plantas.size() << " ";
			forn(i, plantas.size()){
				if(plantas.at(i).S > 0){
					if(i != plantas.size()-1){
						cout << plantas.at(i).F << " ";
					}else{
						cout << plantas.at(i).F << endl;
					}
				}
			}
		}
		cout << endl;
	}

	return 0;
}