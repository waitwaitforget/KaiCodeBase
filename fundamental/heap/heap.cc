#include <vector>
#include <iostream>
using namespace std;

template<class T>
class Heap {
  public:
    void up(T x) {
        while (x > 1 && h[x] > h[x/2]) {
            swap(h[x], h[x/2]);
            x /= 2;
        }
    }

    void down(T x) {
        while (x * 2 <= n) {
            int t = x * 2;
            if (t+1 <= n && h[t+1] > h[t]) t++;
            if (h[t] <= h[x]) break;
            swap(h[x], h[t]);
            x = t;
        }
    }

    void init(vector<T> &nums) {
        h.resize(nums.size());
        n = nums.size();
        for (int i = 0; i < nums.size(); i++) h[i] = nums[i];
        for (int i = n-1; i >= 0; i--) down(i); 
    }

    void print() {
        for (auto x : h) {
            cout << x << " ";
        }
        cout << "\n";
    }
  private:
    vector<T> h;
    int n;
};


int main() {
    vector<int> nums{12, 3, 5, 1, 22, 9, 8};
    Heap<int> h;
    h.init(nums);

    h.print();
    return 0;

}