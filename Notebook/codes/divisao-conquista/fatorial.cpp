#include <bits/stdc++.h>

using namespace std;

int fatorial(int x){
	if(x == 1){
		return 1;
	}
	return x * fatorial(x - 1);
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x;

	scanf("%d", &x);

	printf("%d! = %d\n", x, fatorial(x));

	return 0;
}