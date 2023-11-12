#include "geometry.h"
#include <cmath>

GeoAlgo::point GeoAlgo::geto(point a, point b, point c) {
    double a1, a2, b1, b2, c1, c2;
    point ans;
    a1 = 2 * (b.x - a.x), b1 = 2 * (b.y - a.y);
    c1 = square(b.x) - square(a.x) + square(b.y) - square(a.y);
    a2 = 2 * (c.x - a.x), b2 = 2 * (c.y - a.y);
    c2 = square(c.x) - square(a.x) + square(c.y) - square(a.y);
    if (cmp(a1, 0)) {
        ans.y = c1 / b1;
        ans.x = (c2 - ans.y * b2) / a2;
    } else if (cmp(b1, 0)) {
        ans.x = c1 / a1;
        ans.y = (c2 - ans.x * a2) / b2;
    } else {
        ans.x = (c2 * b1 - c1 * b2) / (a2 * b1 - a1 * b2);
        ans.y = (c2 * a1 - c1 * a2) / (b2 * a1 - b1 * a2);
    }
    return ans;
}
/* 
int main() {
    int n;
    double r = 1.0;
    cin >> n;
    for (int i = 1; i<= n; i++) cin >> p[i].x >> p[i].y;
    for (int i = 1; i<= n; i++) swap(p[rand() % n + 1], p[rand() % n + 1]);
    o = p[1];
    for (int i = 1; i <= n; i++) {
        if (distance(o, p[i]) < r || cmp(distance(o, p[i]), r)) continue;
        o.x = (p[i].x + p[1].x) / 2;
        o.y = (p[i].y + p[1].y) / 2;
        r = distance(p[i], p[1]) / 2;
        for (int j = 2; j < i; j++) {
            if (distance(o, p[j]) < r || cmp(distance(o, p[j]), r)) continue;
            o.x = (p[i].x + p[j].x) / 2;
            o.y = (p[i].y + p[j].y) / 2;
            r = distance(p[i], p[j]) / 2;
            for (int k = 1; k < j; k++) {
                if (distance(o, p[k]) < r || cmp(distance(o, p[k]), r)) continue;
                o = geto(p[i], p[j], p[k]);
                r = distance(o, p[i]);
            }
        }
    }
    cout << r << " " << o.x << " " << o.y << endl;
    return 0;
}
*/