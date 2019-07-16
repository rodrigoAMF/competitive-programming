#include <bits/stdc++.h>

using namespace std;

int main(){
	int degree, degree_1, degree_2;

	scanf("%d.%d", &degree_1, &degree_2);

	degree = (degree_1*100)+degree_2;

	int res = ((degree*36000)/__gcd(36000, degree));
	res/=degree;
	printf("%d\n", res);
	
	return 0;
}