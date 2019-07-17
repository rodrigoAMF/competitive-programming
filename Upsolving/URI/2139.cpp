#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	int dia, mes, dia_ano;

	while(true){
		cin >> mes >> dia;
		if(!cin) break;

		if(mes == 1){
		dia_ano = dia;
		}else if(mes == 2){
			dia_ano = dia+31;
		}else if(mes == 3){
			dia_ano = dia+60;
		}else if(mes == 4){
			dia_ano = dia+91;
		}else if(mes == 5){
			dia_ano = dia+121;
		}else if(mes == 6){
			dia_ano = dia+152;
		}else if(mes == 7){
			dia_ano = dia+182;
		}else if(mes == 8){
			dia_ano = dia+213;
		}else if(mes == 9){
			dia_ano = dia+244;
		}else if(mes == 10){
			dia_ano = dia+274;
		}else if(mes == 11){
			dia_ano = dia+305;
		}else if(mes == 12){
			dia_ano = dia+335;
		}

		if(mes == 12){
			if(dia == 24)
				cout << "E vespera de natal!" << endl;
			else if(dia == 25)
				cout << "E natal!" << endl;
			else if(dia > 25)
				cout << "Ja passou!" << endl;
		}else{
			cout << "Faltam " << 360-dia_ano << " dias para o natal!" << endl;
		}
	}
	return 0;
}