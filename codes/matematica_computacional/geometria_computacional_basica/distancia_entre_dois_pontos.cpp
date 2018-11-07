double dist(point a, point b){
  point c = a - b;
  return sqrt(c.x*c.x + c.y*c.y);
}