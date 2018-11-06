// Lembre-se de inicializar todos os valores da DP como -1 (não calculado) e, para cada estado, ela retornará 1, se for true, ou 0, caso seja false
int dp[MAX];

// F função retorna true assim que encontramos uma maneira de formar o valor x. Se testarmos todas as moedas e nenhuma funcionar, ela retorna false
int solve(int x, vector<int> &c){
	
	if(x==0) return 1;
	
	if(x<0) return 0;
	
	if(dp[x]>=0) return dp[x];
	
	for(int i=0;i<c.size();i++)
		if(solve(x-c[i])) return dp[x-c[i]]=1;
		
	return dp[x]=0;
}
