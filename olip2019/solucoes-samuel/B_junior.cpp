#include<bits/stdc++.h>
using namespace std;

long long dp[100000], n;
const int M = 1000000007;

long long pd(int k){
	if(k == n-1)
		return 1;
	if(k == n-2)
		return 0;
	if(k == n-3)
		return 1;

	if(dp[k] != -1)
		return dp[k];

	long long r = (pd(k+2) + pd(k+3)) % M;

	return dp[k] = r;

}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		dp[i] = -1;
	cout<<pd(0)<<endl;
	return 0;
}