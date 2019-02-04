#include <bits/stdc++.h>

using namespace std;

int fib(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;

	scanf("%d", &n);

	printf("%d\n", fib(n));

	return 0;
}