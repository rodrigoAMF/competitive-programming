#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int n;
long long dp[N];

long long pd(int x)
{
    if(x == 1) return 1;
    if(x == 2) return 0;
    if(x == 3) return 1;
    
    if(dp[x] != -1) return dp[x];

    return dp[x] = (pd(x-2) + pd(x-3))%mod;
}

int main()
{
	memset(dp, -1, sizeof dp);
    scanf("%d",&n);

    printf("%lld\n", pd(n));
    
    return 0;
}