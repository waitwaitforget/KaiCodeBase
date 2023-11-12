#include <iostream>
#include <vector>

using namespace std;


class NumArray {
public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        d.resize(n * 2 + 1, 0);
        idx.resize(n, -1);
        arr = &nums;
        build(0, n-1, 1);
        for (auto x : d) {
            cout << x << ", ";
        }
        cout << endl;
        arr = nullptr;
    }

    void build(int s, int t, int p) {
        //if (p > d.size()) return;
        if (s == t) {
            d[p] = (*arr)[s];
            idx[s] = p;
            return;
        }
        int m = s + (t - s) / 2;
        build(s, m, p * 2);
        build(m+1, t, p*2+1);
        d[p] = d[p*2] + d[p*2+1];
    }

    void update(int index, int val) {
        int diff = val - d[idx[index]];
        int p = idx[index];
        while (p >= 1) {
            d[p] += diff;
            p /= 2;
        }
    }
    
    int sumRange(int left, int right) {
        return rangeSum(left, right, 0, n-1, 1);
    }
    int rangeSum(int left, int right, int s, int t, int p) {
        if (left <= s && t <= right) 
            return d[p];
        int m = s + (t - s) / 2;
        int sum = 0;
        if (left <= m) sum += rangeSum(left, right, s, m, p* 2);
        if (right > m) sum += rangeSum(left, right, m+1, t, p*2+1);
        return sum;
    }
private:
  vector<int> d;
  vector<int> *arr;
  vector<int> idx;
  int n;
};

int main() {
    vector<int> arr{-28,-39,53,65,11,-56,-65,-39,-43,97};
    NumArray data(arr);
    cout << data.sumRange(5, 6) << endl;
    data.update(9, 27);
    cout << data.sumRange(2, 3) << endl;
    cout << data.sumRange(6, 7) << endl;
    data.update(1, -82);
    data.update(3, -72);
    cout << data.sumRange(3, 7) << endl;
    cout << data.sumRange(1, 8) << endl;
    data.update(5, 13);
    data.update(4, -67);
    return 0;
}