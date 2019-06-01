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
    //ios::sync_with_stdio(false);cin.tie(NULL);
    ll n;
    ll p1, p2;

    cin >> n;
    n--;

    p1 = n+(((1+n)*n)/2);

    cout << p1 << endl;

    /*
    for(ll i = 1; i <= 100; i++){
        p1 = p2 = 0;
        ll incrementoMim = 1;
        n = i;
        while(n > 0){
            if(n == 1){
                p1 += 1;
                break;
            }else{
                p1+=1;
            }
            n--;
            if(n < incrementoMim){
                incrementoMim = n;
            }
            p2 += incrementoMim;

            n -= incrementoMim;
            incrementoMim++;
        }
        ll p1c = 1.1041*pow(i,0.5346);
        ll p2c = 0.0357*i+11.004;
        printf("%lld\t%lld\t%lld\t%lld\n", p1, p2, p1c, p2c);
        
    }
    */

    //cout << p1 << " " << p2 << "\n";

    return 0;
}