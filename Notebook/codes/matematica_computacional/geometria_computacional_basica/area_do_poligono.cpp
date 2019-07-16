double area(vector <point> p){
  double ret = 0;
  for(int i = 2; i < p.size(); ++i){
    ret += cross(p[i] - p[0], p[i - 1] - p[0])/2;
  }
  return abs(ret);
}