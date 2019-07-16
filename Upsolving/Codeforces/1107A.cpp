#include <bits/stdc++.h>

using namespace std;

int main(){
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	int q;
	int n;
	string s;
	char d1;

	scanf("%d ", &q);

	while(q--){
		cin >> n >> s;

		if(n == 2 && s[0] >= s[1]){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << "2\n";
			cout << s[0] << " " << s.substr(1) << "\n";
		}
	}

	return 0;
}