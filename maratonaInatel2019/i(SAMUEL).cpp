#include <bits/stdc++.h>

using namespace std;
unsigned long long n,a,b,aux;

unsigned long long f(unsigned long long n)
{
	return n + (((1 + n)*n)/2);
}

int main()
{
//	cout << f(44720) << endl;
	
	scanf("%llu",&n);
	if(n == 1)
	{
		printf("0 0\n");
		return 0 ;
	}
	else if(n == 2)
	{
		printf("1 0\n");
		return 0;
	}

	int k = 1;
	a = 0;
	b = 0;
		n--;
	unsigned long long l = 1,r = 1e10;
	unsigned long long m,ans;
	while(l <= r)
	{
		
		m = l + ((r - l) / 2);
		unsigned long long val = f(m);
		if(val == n) 
		{
			ans = m;
			break;
		}
		else if(val > n)
		{
			r = m-1;
			ans = m;
		}
		else 
		{
			
			l = m+1;
		}
	}

	printf("%llu %llu\n",ans , n - ans);

	return 0;
}