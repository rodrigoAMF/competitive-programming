#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, c, x, y;
	int res;
	bool maior;

	scanf("%d %d %d %d", &a, &c, &x, &y);

	res = c - a - x- y;
	maior = x > (y/2);

	if(res > 0){
		printf("Igor feliz!\n");
	}else if(maior){
		printf("Caio, a culpa eh sua!\n");
	}else{
		printf("Igor bolado!\n");
	}

	return 0;
}