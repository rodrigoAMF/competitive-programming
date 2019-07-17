#include <bits/stdc++.h>

#define MAXN 100100

using namespace std;

int pai[MAXN], peso[MAXN];

// funções do Union-Find otimizadas
int find(int x){

    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}

void join(int x, int y){

    x=find(x);
    y=find(y);

    if(x==y){
        return;
    }

    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }

    if(peso[x]==peso[y]){

        pai[x]=y;
        peso[y]++;
    }
}

int main(){
	/*
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif
	*/
	int n, k;
	char op;
	int banco1, banco2;

	scanf("%d %d", &n, &k);

	for(int i = 1; i <= n; i++){
		pai[i] = i;
		peso[i] = 1;
	}

	for(int i = 0; i < k; i++){
		scanf(" %c %d %d", &op, &banco1, &banco2);

		if(op == 'C'){
			if(find(banco1) == find(banco2)){
				printf("S\n");
			}else{
				printf("N\n");
			}
		}else{
			join(banco1, banco2);
		}
	}

	return 0;
}