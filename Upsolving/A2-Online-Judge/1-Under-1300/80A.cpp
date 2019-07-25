#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 10000009

ll sievesize;
bitset<MAXN> bs;
vector<ll> primes;

void sieve(ll n) {
    sievesize = n + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= sievesize; i++) {
        if (bs[i]) {
            for (ll j = i*i; j <= (ll)sievesize; j+=i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

int main(){
    sieve(55);

    int n, m;
    vector<ll>::iterator it;

    cin >> n >> m;
    
    it = find(primes.begin(), primes.end(), n);
    ++it;

    if((*it) == m){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}