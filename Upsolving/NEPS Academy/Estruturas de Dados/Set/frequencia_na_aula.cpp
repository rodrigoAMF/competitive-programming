#include <bits/stdc++.h>

using namespace std;

int main(){
	/*
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif
	*/

	int n, id;
	set<int> alunos;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &id);
		alunos.insert(id);
	}

	printf("%d\n", alunos.size());

	return 0;
}