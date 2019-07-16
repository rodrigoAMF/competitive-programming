#include <bits/stdc++.h>

using namespace std;

int n, d;
char nome[105];

map<char, int>mp;
vector<int>tam;

int get(string x)
{
	int sum = 0;
	for(int i = 0 ; i < x.size(); i++) sum += (x[i] != ' ');
	return sum;
}

int main()
{

	scanf("%d%d",&n,&d);

	for(int i = 0 ; i < n ; i++)
	{
		scanf(" %[^\n]", nome);

		char letra = tolower(nome[0]);

		int tecnica = get(nome);

		mp[letra] = max(mp[letra], tecnica);
	}

	int ans = 0;

	for(char a = 'a'; a <= 'z'; a++)
	{
		tam.push_back(mp[a]);
	}

	sort(tam.begin(), tam.end(), greater<int>());

	int limite = min((int)tam.size(), d);

	for(int i = 0 ; i < limite; i++)
	{
		ans += tam[i];
		//cout << tam[i] << endl;
	}
	printf("%d\n", ans);
	return 0;
}