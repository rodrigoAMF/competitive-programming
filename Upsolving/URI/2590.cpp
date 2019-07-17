#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.in", "w", stdout);
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int exp;
		scanf("%d", &exp);
		while(exp >= 4){
			exp-=4;
		}
		if(exp == 0){
			printf("1\n");
		}else if(exp == 1){
			printf("7\n");
		}else if(exp == 2){
			printf("9\n");
		}else if(exp == 3){
			printf("3\n");
		}
	}
	return 0;
}