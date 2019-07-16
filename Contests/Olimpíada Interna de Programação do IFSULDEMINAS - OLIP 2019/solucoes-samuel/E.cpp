#include <bits/stdc++.h>
 
using namespace std;
 
const int N = (int)6;
 
int n, m;
int g[N][N];
 
int main() {
  scanf("%d %d", &n, &m);
  if(n >= 6) {
    puts("Festa bunita, festa formosa.");
    return 0;
  }
  for(int i = 0; i < m; ++i) {
    int x, y; scanf("%d %d", &x, &y);
    x--; y--;
    g[x][y] = g[y][x] = 1;
  }
  bool hasTriangle = false;
  for(int i = 0; i < 2; ++i) {
    for(int x = 0; x < n; ++x) {
      for(int y = 0; y < n; ++y) {
        for(int z = 0; z < n; ++z) {
          if(x == y || x == z || y == z) continue;
          if(g[x][y] == i && g[y][z] == i && g[z][x] == i) hasTriangle = 1;
        }
      }
    }
  }
  puts(!hasTriangle ? "Role torto." : "Festa bunita, festa formosa.");
  return 0;
}