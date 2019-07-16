#include <bits/stdc++.h>

using namespace std;

class UnionFind{
private:
	vector<int> parent, rank;
public:
	UnionFind(int N){
		rank.assign(N+1, 0);
		parent.assign(N+1, 0);
		for(int i = 0; i <= N; i++) parent[i] = i;
	}
	int find(int i){
		while(i != parent[i]) i = parent[i];
		return i;
	}
	bool isSameSet(int i, int j){
		return find(i) == find(j);
	}
	void unionSet(int i, int j){
		if(isSameSet(i, j)) return;
		int x = find(i), y = find(j);
		if(rank[x] > rank[y]) parent[y] = x;
		else {
			parent[x] = y;
			if(rank[x] == rank[y]) rank[y]++;
		}
	}
};

int main(){
	int n, m, p;

	scanf("%d %d %d", &n, &m, &p);

	UnionFind uf = UnionFind(n);
	
	int origem, destino;
	
	for(int i = 0; i < m; i++){
		scanf("%d %d", &origem, &destino);
		uf.unionSet(origem, destino);

	}
	//int retorno;
	for(int i = 0; i < p; i++){
		scanf("%d %d", &origem, &destino);
		
		if(uf.isSameSet(origem, destino)){
			printf("Lets que lets\n");
		}else{
			printf("Deu ruim\n");
		}
	}



	return 0;
}