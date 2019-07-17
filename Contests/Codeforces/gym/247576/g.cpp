#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n;
	ll PB, PM;
	PB = PM = 0;

	scanf("%d", &n);

	int cesta[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &cesta[i]);
	}

	int i, j;
	PB = cesta[0];
	PM = cesta[n-1];
	i = 1;
	j = n-2;
	ll maior = 0;

	if(n == 1){
		printf("0\n");

		return 0;
	}

	while(i < j){
		if(PB == PM)
			maior = PB;
		if(PB < PM){
			PB += cesta[i++];
		}else{
			PM += cesta[j--];
		}
	}

	if(PB == PM){
		maior = PB;
	}

	printf("%lld\n", maior);
	
	return 0;
}