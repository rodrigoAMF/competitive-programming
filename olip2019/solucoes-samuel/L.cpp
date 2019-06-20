#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll _sieve_size;
bitset<20000010> bs;
vector<ll> primes;

bool ehprimo(long long n)
{
	if(n % 2 == 0) return false;
	for(int i = 3 ; i <= sqrt(n); i+=2)
	{
		if(n % i ==0)
		{
			//printf("%d\n",i);
			return false;
		}
	}
	return true;
}

ll n;



int main()
{

	cin >> n;

	if(n == 2||ehprimo(n)) printf("1\n");
	else if(n%2 == 0 || ehprimo(n-2))
		printf("2\n");
	else
		printf("3\n");

}