#include<bits/stdc++.h>
 
using namespace std;
 
char s[1005];
int dp[1005][1005];
 
string S;
 
int solve(int i, int j){
    if(i > j) return 0;
 
    if(i == j) return s[i] != 'a';
 
    if(dp[i][j] != -1) return dp[i][j];
 
    if(s[i] == 'a' || s[j] == 'a') return solve(i + (s[i] == 'a'), j - (s[j] == 'a'));
 
    if(s[i] == s[j]) return 2 + solve(i+1, j-1);
 
    return dp[i][j] = max(solve(i+1, j), solve(i, j-1));
 
}
 
int main(){
    scanf("%s", s);
 
    memset(dp, -1, sizeof dp);
 
    printf("%d\n", solve(0, strlen(s)-1));
 
    return 0;
}