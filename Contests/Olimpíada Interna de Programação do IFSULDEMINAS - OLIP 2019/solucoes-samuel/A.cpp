#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n;
long long vet[N];
map<char, int> mp;


int main()
{
	

	mp['A'] = 1650 - 1700;
	mp['C'] = 2000 - 15500;
	mp['S'] = 2000 - 1800;
	mp['M'] = 1000 - 450;
	mp['P'] = 13000;
	mp['K'] = 80 - 100; 
	mp['B'] = 40;
	mp['N'] = 0;
	scanf("%d",&n);

	long long maiorK = vet[0];
	long long sum = 0;
	long long sumTotal = 0,sumTotal2 = 0;
	long long menor = 30000;
	long long maior = -30000;
	long long positivos = 0;
	long long negativos = 0;
	long long nulos = 0;
	for(int i = 0 ; i < n ; i++)
	{
		char x; scanf(" %c",&x);
		vet[i] = mp[x];
		if(vet[i] > 0) positivos++;
		if(vet[i] < 0) negativos++;
		if(vet[i] == 0) nulos++;
		if(vet[i]!=0)
		{
			menor = min(menor, vet[i]);
			maior = min(menor, vet[i]);
		}
	}

	for(int i = 0 ; i < n ; i++)
	{
		if(vet[i] == 0) continue;
		sumTotal += vet[i];
		sum += vet[i];
		maiorK = max(maiorK, sum);

		if(sum < 0) sum = 0;
	}

	sum = 0;
	long long maiorW = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(vet[i] == 0) continue;
		sum += -vet[i];
		sumTotal2 += -vet[i];
		if(sum < 0)
			sum = 0;

		maiorW = max(maiorW, sum);
	}
	
	
	long long ans1 = max(maiorK, (-maiorW) + sumTotal);

	long long ans2 = max((-maiorK) + sumTotal2, maiorW);
	if(nulos == n)
		printf("0 0\n");
	else if(positivos == (n- nulos))
		printf("%lld %lld\n", sumTotal, menor);
	else if(negativos == (n-nulos))
		printf("%lld %lld\n", maior, sumTotal);
	else
	printf("%lld %lld\n",ans1,ans2*-1);


	return 0;
}