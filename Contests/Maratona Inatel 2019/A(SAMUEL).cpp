#include <bits/stdc++.h>

using namespace std;

int n,m;
char a[105];
deque<int>vet;
int v;
int main()
{	
	scanf("%d%d",&n,&m);
	int ans;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d %s",&v,&a);
		vet.push_back(v);
		if((i+1) == m) ans = v;
	}
	


	while(vet.size() != 1)
	{

		if(vet.size() > 1)
		{
			vet.pop_back();
			
			n--;
			
		}
		if(n > 1)
		{
			vet.pop_front();
			n--;
			m--;
		}
		if(m > n/2 && n > 1)
		{
			vet.pop_front();
			n--;
			m--;
			
		}
		else if(n > 1)
		{
			
			vet.pop_back();
			n--;
			
		}

		
	}
	if(vet[0] == ans) printf("SIM\n");
	else printf("NAO\n");


	return 0;
}