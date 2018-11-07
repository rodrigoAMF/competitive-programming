double dist(point a, line b){
  double crs = cross(point(a - b.first), point(b.second - b.first));
  return abs(crs/dist(b.first, b.second));
}