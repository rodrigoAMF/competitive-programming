#include <bits/stdc++.h>

using namespace std;

int main(){
	int posI, posJ, n, posFinal;

	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			scanf("%d", &n);
			if(n == 1){
				posI = i;
				posJ = j;
			}
		}
	}

	posFinal = abs(3-posI)+abs(3-posJ);

	printf("%d\n", posFinal);

	return 0;
}