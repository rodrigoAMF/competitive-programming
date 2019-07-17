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

string proximoSeq(string peca){
	string proximo = peca;
	if(peca[0] == '9'){
		if(peca[1] == 'm'){
			proximo[1] = 'p';
		}else if(peca[1] == 'p'){
			proximo[1] = 's';
		}else{
			proximo[1] = 'a';
		}
		proximo[0] = '1';
	}else{
		proximo[0]++;
	}

	return proximo;
}

bool ehKoutsu(string pecas[3]){
	if(pecas[0] == pecas[1] && pecas[1] == pecas[2]){
		return true;
	}
	return false;
}

bool ehShuntsu(string pecas[3]){
	if((pecas[1] == proximoSeq(pecas[0]) && pecas[1][1] == proximoSeq(pecas[0])[1]) 
		&& (pecas[2] == proximoSeq(pecas[1]) && pecas[2][1] == proximoSeq(pecas[1])[1])){
		return true;
	}
	return false;
}

int pecasIguais(string pecas[3]){
	if(pecas[0] == pecas[1] || pecas[1] == pecas[2] || pecas[0] == pecas[2])
		return 2;
	return 1;
}

int sequencias(string pecas[3]){
	if((pecas[1] == proximoSeq(pecas[0]) && pecas[1][1] == proximoSeq(pecas[0])[1]) 
		|| (pecas[1] == proximoSeq(proximoSeq(pecas[0])) && pecas[1][1] == proximoSeq(proximoSeq(pecas[0]))[1] )){
		return 2;
	}
	if((pecas[2] == proximoSeq(pecas[1]) && pecas[2][1] == proximoSeq(pecas[1])[1]) 
		|| (pecas[2] == proximoSeq(proximoSeq(pecas[1])) && pecas[2][1] == proximoSeq(proximoSeq(pecas[1]))[1] )){
		return 2;
	}
	return 1;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    string pecas[3];

    cin >> pecas[0] >> pecas[1] >> pecas[2];

    sort(pecas, pecas+3);

    if(ehKoutsu(pecas) || ehShuntsu(pecas)){
    	cout << "0\n";
    }else{
    	/*for(int i = 0; i < 3; i++){
    		cout << pecas[i] << " ";
    	}
    	cout << endl;*/
    	int pIguais = pecasIguais(pecas);
    	int seq = sequencias(pecas);
    	//cout << "iguais: " << pIguais << " seq: " << seq << "\n"; 
    	int minimoNecessario;
    	if(pIguais > seq){
    		minimoNecessario = 3-pIguais;
    	}else{
    		minimoNecessario = 3-seq;
    	}
    	cout << minimoNecessario << "\n";
    }
    
    return 0;
}