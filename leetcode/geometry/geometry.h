#include "../common.h"

class GeoAlgo {
  struct point {
    double x, y;
  } p[100005], o;

  double square(double x) { return x * x; }

  double distance(point a, point b) { return sqrt(square(a.x - b.x) + square(a.y - b.y)); }

  bool cmp(double a, double b) { return fabs(a - b) < 1e-8; }

 public:
  point geto(point a, point b, point c);

};