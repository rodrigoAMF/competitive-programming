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
#define sz(x) int (x.size())
#define all(x) x.begin(), x.end()
#define mset(x,y) memset(&x, (y), sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair<int, int> ii;

#define MAXN 200001
vector<ii> adjList[MAXN];

int N, M;

ll prim() {
    bool taken[MAXN];
    mset(taken, false);
    taken[0] = true;
    priority_queue<ii> pq;
    ii v, front; int u, w; ll cost = 0;
    for(int j = 0; j < (int)sz(adjList[0]); j++){
        v = adjList[0][j];
        pq.push(ii(-v.se, -v.fi));
    }
    while(!pq.empty()) {
        front = pq.top(); pq.pop();
        u = -front.se; w = -front.fi;
        if(!taken[u]) {
            cost += (ll)w; taken[u] = true;
            for(int j = 0; j < (int) sz(adjList[u]); j++){
                v = adjList[u][j];
                if (!taken[v.fi]) pq.push(ii(-v.se, -v.fi));
            }
        }
    }
    return cost;
}

int main(){
    ll n, m;
    ll x, y, z;

    while(1){
        cin >> m >> n;

        if(m == n && m == 0) break;

        ll maxV = -1;
        ll totalMetros = 0;

        for(int i = 0; i < n; i++){
            cin >> x >> y >> z;
            adjList[x].pb(ii(y, z));
            adjList[y].pb(ii(x, z));
            totalMetros += z;
            if(x > maxV) x = maxV;
            if(y > maxV) y = maxV;
        }
        ll economia = totalMetros-prim();

        cout << economia << "\n";

        for(ll i = 0; i <= 200000; i++){
            adjList[i].clear();
        }
    }
    

    return 0;
}