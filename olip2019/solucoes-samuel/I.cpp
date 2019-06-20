#include <bits/stdc++.h>

using namespace std;

int n,m;


struct cara
{
	int v;
	bool vida;

	bool operator <(const cara& q) const
	{
		if(vida == q.vida) return v > q.v;
		return vida;
	}

}caras[10005];

int main()
{
	scanf("%d%d",&n,&m);
	int a = 0;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			string g;
			cin >> g;
			caras[a].v = g[0]-'0';
			caras[a].vida = (g[1] == 'V')? true : false;
			a++;
		}
	}
	sort(caras, caras + a);

	for(int i = 0 ; i < a ; i++) printf("%c%c\n", caras[i].v + '0', caras[i].vida ? 'V' : 'D');

	return 0;
}