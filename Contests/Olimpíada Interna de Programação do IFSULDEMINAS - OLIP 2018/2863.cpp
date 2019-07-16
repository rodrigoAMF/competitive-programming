#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, first;
	double t, mt;

	while(scanf("%d", &n) != EOF){
		first = 1;
		while(n--){
			scanf("%lf", &t);
			if(first){
				first = 0;
				mt = t;
			}else{
				if(t < mt)
					mt = t;
			}
		}
		printf("%.2lf\n", mt);
	}

	return 0;
}