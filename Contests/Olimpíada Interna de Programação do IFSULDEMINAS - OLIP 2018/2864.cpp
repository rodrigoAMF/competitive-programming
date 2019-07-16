#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double a,b,c;
	double x, res;

	scanf("%d", &n);

	while(n--){
		scanf("%lf %lf %lf", &a, &b, &c);
		x = -b/(2*a);
		res = a*x*x + b*x + c;

		printf("%.2lf\n", res);
	}

	return 0;
}