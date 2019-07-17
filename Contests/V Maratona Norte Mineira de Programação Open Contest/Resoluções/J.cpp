#include<bits/stdc++.h>

using namespace std;

const long long N = 5005,oo = 0x3f3f3f3f;
int n,m;
long long dp[N],qt[N],val[N];

long long pd(int i){
    if(dp[i] != -1) return dp[i];
    if(i == 0) return 0;
    long long ans = -oo;
    for(int j=0;j<n;j++){
        if(i >= qt[j]) ans = max(ans,val[j]+pd(i-qt[j]));
    }
    return dp[i] = ans;
}

int main(){
    while(~scanf("%d%d",&n,&m)){
        for(int i=0;i<=2005;i++){
            dp[i] = -1;
        }
        for(int i=0;i<n;i++){
            scanf("%lld%lld",&qt[i],&val[i]);
        }
        printf("%lld\n",pd(m));
    }
	return 0;
}
/*
4 9
4 7
5 5
3 4
2 3
*/
