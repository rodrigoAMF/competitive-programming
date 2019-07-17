#include <bits/stdc++.h>

using namespace std;

int fib(int n){
	if(n == 1 || n == 0){
		return 1;
	}else
		return fib(n-1) + fib(n-2);
	
}

int main(){
	int n;

	cin >> n;

	cout << fib(n) << endl;

	return 0;
}