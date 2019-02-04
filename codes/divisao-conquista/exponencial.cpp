#include <bits/stdc++.h>

using namespace std;

int exp(int x, int y){
	if(y == 0){
		return 1;
	}
	return x * exp(y - 1);
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d^%d = %d\n", x, y, exp(x, y));

	return 0;
}