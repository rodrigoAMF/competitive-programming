#include <bits/stdc++.h>

using namespace std;

int main(){
	long long res, a,b,k;
	int n;
	int direita = 1;

	scanf("%d", &n);

	while(n--){
		scanf("%lld %lld %lld", &a, &b, &k);

		if((k%2) == 0){
			res = ((k/2)*a) - ((k/2)*b);
		}else{
			res = (((k/2)+1)*a) - ((k/2)*b);
		}

		printf("%lld\n", res);
	}

	return 0;
}
