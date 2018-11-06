using namespace std;

// defino MAXN como 1010
#define MAXN 1010

// declaro as variáveis que vou usar
int s1[MAXN], s2[MAXN], tab[MAXN][MAXN];

int lcs(int a, int b){ // declaro a função da DP, de nome lcs
	
	// se já calculamos esse estado da dp antes
	if(tab[a][b]>=0) return tab[a][b]; // retornamos o valor salvo para ele
	
	// se uma das sequências for vazia, retornamos zero
	if(a==0 or b==0) return tab[a][b]=0;
	
	// se s1[a] for igual a s2[b], os retiramos das sequências
	if(s1[a]==s2[b]) return 1+lcs(a-1, b-1); // e adicionamos ele à lcs das subsequâncias restantes
	
	// se forem diferentes, retorno o máximo entre retirar s1[a] ou s1[b]
	return tab[a][b]=max(lcs(a-1, b), lcs(a, b-1));
}