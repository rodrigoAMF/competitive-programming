#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

int memo[MAX];

int fib(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	if(memo[n] == -1){
		return fib(n - 1) + fib(n - 2);
	}else{
		return memo[n];
	}
	
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;

	memset(memo, -1, sizeof(memo));

	scanf("%d", &n);

	printf("%d\n", fib(n));

	return 0;
}