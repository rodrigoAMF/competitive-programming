#include <bits/stdc++.h>

using namespace std;

verificaIgualdade(char c1, char c2){
	if(c1 == '['){
		return c2 == ']';
	}else if(c1 == '{'){
		return c2 == '}';
	}else
		return c2 == ')';
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif

	int n;
	string expressao;

	scanf("%d", &n);

	while(n--){
		cin >> expressao;

		cout << expressao << endl;

		for(int i = expressao.size()/2, j = (expressao.size()/2)-1; i < expressao.size(); i++, j--){
			if(expressao[i] != expressao[j]){
				printf("N", );
			}
		}

	}

	return 0;
}