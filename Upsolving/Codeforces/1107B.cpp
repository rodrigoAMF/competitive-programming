#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	ll n, k, x;

	cin >> n;

	while(n--){
		cin >> k >> x;

		cout << ((k - 1)*9) + x << "\n";
	}


	return 0;
}