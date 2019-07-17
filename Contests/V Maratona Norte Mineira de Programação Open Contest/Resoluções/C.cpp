#include<bits/stdc++.h>

using namespace std;

const long long N = 100005,oo = numeric_limits<long long>::max();
int n;
long long e[2][N],t[2][N],dp[2][N];

long long pd(int i,int j){
    if(j > n) return e[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    long long ans = oo;
    if(j != n){
        ans = pd((i+1)%2,j+1)+t[i][j]+e[i][j];
    }
    ans = min(ans,pd(i,j+1)+e[i][j]);
    return dp[i][j] = ans;
}

int main(){
    while(~scanf("%d",&n)){
        memset(dp,-1,sizeof dp);
        scanf("%lld%lld",&e[0][0],&e[1][0]);
        for(int i=1;i<=n;i++){
            scanf("%lld",&e[0][i]);
        }
         for(int i=1;i<=n;i++){
            scanf("%lld",&e[1][i]);
        }
        for(int i=1;i<n;i++){
            scanf("%lld",&t[0][i]);
        }
        for(int i=1;i<n;i++){
            scanf("%lld",&t[1][i]);
        }
        scanf("%lld%lld",&e[0][n+1],&e[1][n+1]);
      //  printf("%lld %lld\n",e[0][0],e[0][n+1]);
        printf("%lld\n",min(e[0][0]+pd(0,1),e[1][0]+pd(1,1)));
    }
	return 0;
}
/*
3
1 1
1 2 3
3 2 1
1 2
2 1
1 1

3
0 0
0 0 0
3 2 1
1 2
2 1
1 1
*/