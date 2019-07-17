#include<bits/stdc++.h>
 
using namespace std;
 
char aux[30];
int dp[15][30][2], t;
 
int solve(int pos, int seteum, int prefix){
 
    if(pos == t) return seteum;
 
    if(dp[pos][seteum][prefix] != -1) return dp[pos][seteum][prefix];
 
    int d = prefix ? aux[pos] - '0' : 9;
 
    int ans = 0;
 
    for(int i=0;i<=d;i++){
        ans+=solve(pos+1, seteum + ((i == 7) || (i == 1)), prefix & (i == d));
    }
 
    return dp[pos][seteum][prefix] = ans;
 
}
 
int main(){
 
    long long n;
    scanf("%I64d", &n);
    sprintf(aux, "%I64d", n);
    t = strlen(aux);
    memset(dp, -1, sizeof dp);
    printf("%d\n", solve(0, 0, 1));
 
    return 0;
}