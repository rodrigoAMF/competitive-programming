#include <bits/stdc++.h>

using namespace std;

#define N 101010

vector<int> prime;
bitset<N>bs;

void sieve(){
    bs.set(); bs[0] = bs[1] = 0;
    for(int i=2; i<N; i++){
        if(bs[i]){
            for(int j=i+i; j<N; j+=i) bs[j] = 0;
            prime.push_back(i);
        }
    }
}

bool isprime(int n){
    if(n<N) return bs[n];
    bool ans = true;
    for(int pf=0; prime[pf]*prime[pf] <= n; pf++){
        while(n%prime[pf] == 0){
            n/=prime[pf];
            ans = false;
        }
    }
    
    return ans;
    
}


int solve(int a){
    
    if(isprime(a)) return 1;
    if(isprime(a-2)) return 2;
    if(a%2) return 3;
    if(a%2 == 0)    return 2;
    
}

int main(){
    int n;
    sieve();
    cin >> n;
    cout << solve(n) << endl;
}