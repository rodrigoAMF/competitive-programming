#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

typedef pair <double, double> point;

point sum(point a, point b){
  point ret;
  ret.x = a.x + b.x;
  ret.y = a.y + b.y;
  return ret;
}

point neg(point a){
  point ret;
  ret.x = -a.x;
  ret.y = -a.y;
  return ret;
}