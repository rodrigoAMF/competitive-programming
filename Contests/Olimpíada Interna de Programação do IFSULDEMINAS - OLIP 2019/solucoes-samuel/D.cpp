#include <bits/stdc++.h>

using namespace std;
const long long oo = 1e10 + 5;
const long long mod = 1e9 + 7;
int x, dp2[1005];
long long dp[1005];
vector<int>tres;

long long pd(int n)
{
    if(n >= x) return 1LL;

    if(dp[n] != -1) return dp[n];

    long long ans = 0;

    if(n + 1 == x)
        ans = (ans + pd(n + 1))%mod;
    else
    {
        for(int i = 0 ; i < (int)tres.size(); i++)
        {
            ans = (ans + pd(n + tres[i]))%mod;
            if((n + tres[i]) >= x) break;
        }
    }
    

    return dp[n] = ans;
}
/// da pra fazer essa segunda parte de forma gulosa (?)
int pd2(int n)
{
    if(n > x) return 0x3f3f3f3f;
    if(n == x) return 0;

    if(dp2[n] != -1) return dp2[n];

    int ans = 0x3f3f3f3f;
    
    for(int i = 0 ; i < (int)tres.size(); i++)       
        ans = min(ans,pd2(n + tres[i]) + 1);

    return dp2[n] = ans;
}

int main()
{
    memset(dp, - 1, sizeof dp);
    memset(dp2, - 1, sizeof dp2);
    tres.push_back(1);
    tres.push_back(3);

    scanf("%d", &x);
    
    for(int i = 4 ; ; i++)
    {
        if(i % 3 == 0) tres.push_back(i);
        if(tres[tres.size()-1] >= x) break;
    }
    //cout << tres.size() << endl;
    printf("%lld %d\n",pd(0),pd2(0));

    return 0;
}