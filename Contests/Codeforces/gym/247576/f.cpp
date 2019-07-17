#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct Ponto
{
	double x;
	double y;

	double distancia(Ponto p){
		double ans;
		ans = ((p.x-x)*(p.x-x)) + ((p.y-y)*(p.y-y));
		return sqrt(ans);
	}
}pontos[3];

int main(){
	double a, b, c, p, ans;
	int n;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			scanf("%lf %lf", &pontos[j].x, &pontos[j].y);
		}
		a = pontos[0].distancia(pontos[1]);
		b = pontos[1].distancia(pontos[2]);
		c = pontos[2].distancia(pontos[0]);
		p = (a+b+c)/2.0;
		ans = sqrt(p*(p-a)*(p-b)*(p-c));

		printf("%.3lf\n", ans);
	}
	
	return 0;
}