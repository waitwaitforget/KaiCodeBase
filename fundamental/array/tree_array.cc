#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;
const int N = (2e6 + 10);
using ll = long long;

ll tr[N];
int n, q;

int lowbit(int x) {
    return x & -x;
}

ll add(int x) {
    ll s = 0;
    for (int i = x; i; i -= lowbit(i)) {
        s += tr[i];
    }
    return s;
}

void update(int x, int c) {
    for (int i = x; i<= n; i += lowbit(i)) {
        tr[i] += c;
    } 
}

 
int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        update(i, x);
    }
    while (q--) {
        int op, l, r;
        cin >> op >> l >> r;
        if (op == 1) {
            update(l, r);
        } else {
            cout << add(r) - add(l-1) << endl;
        }
    }
    return 0;
}