#include <bits/stdc++.h>

using namespace std;

int n,m;
char x[101];
set<char>vogais;
set<char>consoantes;
int main()
{
	scanf("%d",&n);
	string nome;
	vector<string>v;
	v.assign(n, "");
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&m);
		for(int z = 0 ; z < m ; z++)
		{
			scanf(" %[^\n]", x);
			if(z == 0) nome += toupper(x[0]);
			v[i].push_back(tolower(x[0]));
			char aux = tolower(x[z]);
			
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		for(int x=0; x< v[i].size(); x++)
		{
			char aux = v[i][x];
			if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u')
				vogais.insert(aux);
			else 
				consoantes.insert(aux);
		}
	}
	printf("Nome da Linguagem: %s\n", nome.c_str());
	printf("Lista de Palavras:\n");
	for(int i = 0 ; i < n ; i++)
		cout << v[i] << endl;
	printf("Numero de Vogais: %d\n", (int)vogais.size());
	printf("Numero de Consoantes: %d\n", (int)consoantes.size());
	int tot = (int)vogais.size() + (int)consoantes.size();
	printf("Numero Total de Letras: %d\n", tot);
	if((int)consoantes.size())
		printf("Tempo para aprender: %.1lf horas\n", (tot + vogais.size())/(double)((int)consoantes.size()));
	else printf("Linguagem Ruim\n");

	return 0;
}