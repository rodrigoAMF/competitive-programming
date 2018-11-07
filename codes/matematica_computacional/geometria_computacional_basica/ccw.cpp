double ccw(point a, point b, point c){
  double ret = cross(b - a, c - b);
  return ret < 0;
}