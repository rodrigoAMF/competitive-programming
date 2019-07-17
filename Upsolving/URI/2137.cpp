#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	vector<int> valores;

	while(scanf("%d", &n) != EOF){
		valores.clear();
		while(n--){
			scanf("%d", &x);
			valores.push_back(x);
		}
		sort(valores.begin(), valores.end());
		for(int i = 0; i < valores.size(); ++i){
			printf("%04d\n", valores.at(i));
		}
	}

	return 0;
}