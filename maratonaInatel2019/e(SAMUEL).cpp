#include <bits/stdc++.h>

using namespace std;

int dp[5005];

int n;

int main()
{
	scanf("%d",&n);
	int cur = 1;
	
	while(n--)
	{
		int op; scanf("%d",&op);

		if(op == 1)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			for(int i = 0 ; i <= 5000; i++)
			{
				
				int ans = dp[i];
				if(i >= a)
				ans = max(ans, dp[i - a] + b);

				dp[i] = ans;
			}
			cur++;
		}
		else
		{
			int r; scanf("%d",&r);
			int aux = cur - 1;
			printf("%d\n", dp[r]);
		}
	}

	return 0;
}