#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 4005;
 
int n, m, q;
int g[N][N];
 
int main()
{

  memset(g, 0, sizeof g);
  scanf("%d %d %d", &n, &m, &q);
  for(int i = 0; i < m; ++i)
  {
    int x, y; scanf("%d%d", &x, &y); x--; y--;
  
    g[x][y] = 1;
    g[y][x] = 1;
  }

  for(int k = 0; k < n; ++k)
  {
    for(int i = 0; i < n; ++i)
    {
      for(int j = 0; j < n; ++j)
      {
        g[i][j] |= (g[i][k] & g[k][j]);
      }
    }
  }
  while(q--)
  {
    int a, b; scanf("%d %d", &a, &b); a--; b--;
   
    puts(g[a][b] ? "Lets que lets" : "Deu ruim");
  }
  return 0;
}