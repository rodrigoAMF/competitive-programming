#include <bits/stdc++.h>

using namespace std;

struct point{
    double x, double y;
    point(){}
    point(double _x, double _y){
      x = _x;
      y = _y;
    }
    point operator+(const point &oth){
      return point(x + oth.x, y + oth.y);
    }
    point operator-(const point &oth){
      return point(x - oth.x, y - oth.y);
    }
};