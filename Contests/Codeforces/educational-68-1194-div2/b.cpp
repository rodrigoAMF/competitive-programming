#include <bits/stdc++.h>

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define sz (x) int(x.size())
#define all (x) x.begin(), x.end()
#define mset (x, y) memset(&x, (y), sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair<int , int> ii;

int main(){
	int q;
	int n, m;

	scanf("%d", &q);

	while(q--){
		scanf("%d %d ", &n, &m);
		int qLinha[n];
		int qColuna[m];
		char pintura[n][m];
		int indexMaiorColuna = 0;
		int indexMaiorLinha = 0;
		int maiorColuna = 0;
		int maiorLinha = 0;
		char aux;
		memset(qLinha, 0, sizeof(qLinha[0])*n);
		memset(qColuna, 0, sizeof(qColuna[0])*m);

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%c", &pintura[i][j]);
				//printf("%c", aux);
				if(pintura[i][j] == '*'){
					qLinha[i]++;
					qColuna[j]++;
					if(qLinha[i] > maiorLinha){
						maiorLinha = qLinha[i];
						indexMaiorLinha = i;
					}
					if(qColuna[j] > maiorColuna){
						maiorColuna = qColuna[j];
						indexMaiorColuna = j;
					}
				}
			}
			//printf("\n");
			scanf("%c", &aux);
			//printf("\n");
		}
		//printf("%d %d\n", n, m);
		//printf("%d %d ", maiorLinha, maiorColuna);
		if(maiorLinha == m && maiorColuna == n){
			printf("0\n");
		}else{
			int diffLinha = n-maiorLinha;
			int diffColuna = m-maiorColuna;
			if(pintura[indexMaiorLinha][indexMaiorColuna] == '.'){
				diffLinha-=1;
			}
			printf("%d\n", diffLinha+diffColuna);
		}
	}

	return 0;
}