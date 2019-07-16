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
typedef vector<int> vi;
typedef pair<int , int> ii;

int main(){
    ll m, n, k;
    ll fim, inicioDescartados;

    scanf("%lld %lld %lld", &n, &m, &k);

    ll posDescartados[m];

    fim = k;
    //inicioDescartados = 0;
    ll itensRemovidos = 0;
    ll operacoes = 0;
    for(ll i = 0; i < m; i++){
    	scanf("%lld", &posDescartados[i]);
    	if(posDescartados[i] <= fim){
    		//cout << "descartado: " << posDescartados[i] << endl;
    		itensRemovidos++;
    	}else{
    		if(itensRemovidos > 0){
	    		fim += itensRemovidos;
	    		operacoes++;
	    	}else{
	    		if((fim+k) <= n){
	    			fim = fim+k;
	    		}else if((n-fim) == 0){
	    			fim = -1;
	    		}else{
	    			fim = n;
	    		}
	    	}
	    	//cout << itensRemovidos << " " << fim << endl;
	    	itensRemovidos = 0;
	    	if(posDescartados[i] <= fim){
	    		//cout << "descartado: " << posDescartados[i] << endl;
	    		itensRemovidos++;
	    	}
	    	if(itensRemovidos > 0){
	    		fim += itensRemovidos;
	    		operacoes++;
	    	}else{
	    		if((fim+k) <= n){
	    			fim = fim+k;
	    		}else if((n-fim) == 0){
	    			fim = -1;
	    		}else{
	    			fim = n;
	    		}
	    	}
    	}
    }

    
    /*while(fim != -1 && inicioDescartados < m){
    	itensRemovidos = 0;
    	while(inicioDescartados < m && posDescartados[inicioDescartados] <= fim){
    		//cout << "descartado: " << posDescartados[inicioDescartados] << endl;
    		itensRemovidos++;
    		inicioDescartados++;
    	}
    	if(itensRemovidos > 0){
    		fim += itensRemovidos;
    		operacoes++;
    	}else{
    		if((fim+k) <= n){
    			fim = fim+k;
    		}else if((n-fim) == 0){
    			fim = -1;
    		}else{
    			fim = n;
    		}
    	}
    	//cout << inicioDescartados << " " << posDescartados[inicioDescartados] << endl;
    	//cout << itensRemovidos << " " << fim << endl;
    	
    }*/

    printf("%lld\n", operacoes);
    
    return 0;
}