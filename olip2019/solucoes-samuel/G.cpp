#include <bits/stdc++.h>

using namespace std;

int n;

struct cat
{
	int id;
	int wins;

	bool operator < (const cat &q)const
	{
		if(wins != q.wins)
			return wins < q.wins;
		return id < q.id;
	}

}cats[4];

int main()
{
	scanf("%d", &n);

	
	for(int i = 0 ; i < 4 ; i++)
	{
		cats[i].id = i+1;
		cats[i].wins = 0;
	}
	for(int i = 0 ; i < n ; i++)
	{
		vector<string>x;
		char s[101];
		scanf("%s",s);
		for(int j = 0 ; j < 4 ; j++)
		{

			scanf(" %[^\n]", s);
			x.push_back(s);
		}
		scanf("%s",s);
		for(int j = 0 ; j < 4 ; j++)
		{
			scanf(" %[^\n]",s);
			if(s == x[j])cats[j].wins++;
		}
	}
	sort(cats, cats + 4);

	int aux = cats[0].wins;

	for(int i = 0 ; i < 4 ; i++)
	{
		
		if(cats[i].wins == aux)
			printf("%d", cats[i].id);
		if(i == 3 || cats[i+1].wins != aux)
		{
			printf("\n");
			break;
		}
		else printf(" ");
	}


	return 0;
}