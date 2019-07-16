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
    int n;

    cin >> n;

    int figurinhas[n];

    for(int i = 0; i < n; i++){
        cin >> figurinhas[i];
    }
    bool perfeita = true;
    for(int i = 0; i < (n-1); i++){
        if(i == 0){
            if(figurinhas[i] == figurinhas[i+1]){
                perfeita = false;
                break;
            }
        }else{
            if(figurinhas[i] == figurinhas[i+1] || figurinhas[i-1] == figurinhas[i]){
                perfeita = false;
                break;
            }

        }
    }

    cout << ((perfeita) ? "perfeita" : "imperfeita") << "\n";

    return 0;
}