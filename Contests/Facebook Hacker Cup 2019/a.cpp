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

map<string, int> estadosJaGerados;

bool ehPosicaoValidaBeta(string s, int pos){
    return (pos < (int)s.length() && pos >= 0 && s[pos] == '.');
}

bool ehPosicaoValidaAlpha(string s, int pos){
    return (pos < (int)s.length() && pos >= 0 && s[pos-1] == 'B' && s[pos] == '.');
}

int verificaSeEhPossivel(string s, int posAlpha){
    if(posAlpha == (int)s.length()-1){
        return 1;
    }
    if(estadosJaGerados[s] != 1){
        estadosJaGerados[s] = 1;
        int resposta;
        if(ehPosicaoValidaAlpha(s, posAlpha+2)){
            s[posAlpha] = '.';
            s[posAlpha+2] = 'A';
            resposta = verificaSeEhPossivel(s, posAlpha+2);
            if(resposta == 1) return resposta;
            s[posAlpha] = 'A';
            s[posAlpha+2] = '.';
            
        }

        for(int i = 0; i < (int)s.length(); i++){
            if(s[i] == 'B'){
                if(ehPosicaoValidaBeta(s, i+1)){
                    s[i] = '.';
                    s[i+1] = 'B';
                    resposta = verificaSeEhPossivel(s, posAlpha+2);
                    if(resposta == 1) return resposta;
                    s[i] = 'B';
                    s[i+1] = '.';
                }
            }
        }
    }
    
    return 0;  
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;

    cin >> t;
    cin.ignore();

    for(int i = 1; i <= t; i++){
        string s;
        cin >> s;

        int resposta = verificaSeEhPossivel(s, 0);
        char yesOrNot = (resposta ? 'Y' : 'N');

        cout << "Case #" << i << ": " << yesOrNot << "\n";
    }

    return 0;
}