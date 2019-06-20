#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
const ll N = 100005,MOD = 1e9 + 7;
 
int n;
ll dp[N] = {1,1},sum[3]={0,1,0};
 
int main(){
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		dp[i] = (dp[i]+dp[i-1])%MOD;
		dp[i] = (dp[i]+sum[i%3]+1)%MOD;
		sum[i%3] = (sum[i%3]+dp[i])%MOD;
	}
 
	int ans;
	if(n == 2 || n == 1) ans = n;
	else ans = n%3 + 1;
 
	printf("%lld %d\n",dp[n],ans);
	return 0;
}