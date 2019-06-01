#include <bits/stdc++.h>

#define ALFA 256
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define FOR(x, n) for (int x=0; (x)<int (n) ; (x)++)
#define FOR1(x, n) for (int x=1; (x) <= int (n) ; (x)++)
#define REP(x, n) for (int x=int (n)-1; (x)>=0; (x)--)
#define REP1(x, n) for (int x=(n); (x) > 0; (x)--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define sz (x) int (x.size())
#define all (x) x.begin(), x.end()
#define mset (x , y ) memset(&x , (y) , sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair<int , int> ii;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int N, T;

    cin >> N >> T;

    ll tipo[N], preco[N];

    for(int i = 0; i < N; i++){
        cin >> tipo[i];
        tipo[i]--;
    }
    ll maiorPreco = -1;
    for(int i = 0; i < N; i++){
        cin >> preco[i];
        if(preco[i] > maiorPreco){
            maiorPreco = preco[i];
        }
    }

    /*bitset<100001> apareceu;
    ll maiorTodasSeq = -1;
    ll maiorAtualSeq = -1;
    int posMaiorAtualSeq = -1;
    int contadorSeq = 0;

    int i, j;

    for(i = 0; i < N; i++){
        apareceu.reset();
        contadorSeq = 0;
        for(j = i; j < N; j++){
            if(!apareceu.test(tipo[j])){
                apareceu.set(tipo[j]);
                contadorSeq++;
                if(preco[j] > maiorAtualSeq){
                    maiorAtualSeq = preco[j];
                    posMaiorAtualSeq = j;
                }
                if(contadorSeq == T){
                    if(maiorAtualSeq > maiorTodasSeq){
                        maiorTodasSeq = maiorAtualSeq;
                        i = posMaiorAtualSeq;
                        // já achou maior possível
                        if(maiorTodasSeq == maiorPreco){
                            i = N;
                        }
                        break;
                    }else{
                        i = j+1;
                    }
                }
            }
        }
        if(j == N && contadorSeq != T) break;
    }*/

    bitset<100001> apareceu;
    ll maiorTodasSeq = -1;
    ll maiorAtualSeq = -1;
    int posMaiorAtualSeq = -1;
    int contadorSeq = 0;

    apareceu.reset();
    contadorSeq = 0;
    for(int i = 0; i < N; i++){
        if(preco[i] > maiorAtualSeq){
            maiorAtualSeq = preco[i];
        }
        if(!apareceu.test(tipo[i])){
            apareceu.set(tipo[i]);
            contadorSeq++;
        }
            
        if(contadorSeq == T){
            apareceu.reset();
            contadorSeq = 0;
            if(maiorAtualSeq > maiorTodasSeq){
                maiorTodasSeq = maiorAtualSeq;
                // já achou maior possível
                if(maiorTodasSeq == maiorPreco){
                    i = N;
                }
            }
        }
    }

    cout << maiorTodasSeq << "\n";

    return 0;
}