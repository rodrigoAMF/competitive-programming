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

using namespace std;

int calculaLado(double porcentagem, int area){
	return (int)sqrt(area/porcentagem);
}

int main(){
	int a, b, c;

	while (true) {
    	cin >> a;
    	if (a == 0)
        	break;
        cin >> b;
        cin >> c;
        double porcentagem = c/100.0;
        int area = a*b;
    	cout << calculaLado(porcentagem, area) << "\n";
	}
}