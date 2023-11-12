#include "array.h"


bool ArrayProblemSet::lc457CircularArrayLoop(vector<int>& nums) {
    if (nums.size() < 2) return false;
    int n = nums.size();
    auto next = [&](int cur) {
        return (((cur + nums[cur]) % n) +n) % n;
    };

    for (int i = 0; i < nums.size(); i++) {
        int start = i;
        while (nums[next(start)] * nums[i] > 0) {
            start = next(start);
            if (start == i) return true;
            else if ((nums[i] > 0 && start > i) || (nums[i] < 0 && start < i)) break;
        }
    }
    return false;
}

vector<int> ArrayProblemSet::lc347TopKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
    unordered_map<int, int> counter;
    for (auto num : nums) {
        counter[num]++;
    }
    priority_queue<IntPair, vector<IntPair>, GreaterCmp<IntPair> > pq;
    for (auto it = counter.begin(); it != counter.end(); it++) {
        if (pq.size() == k) {
            if (pq.top().second < it->second) {
                pq.pop();
                pq.emplace(make_pair(it->first, it->second));
            } 
        } else {
                pq.emplace(make_pair(it->first, it->second));
        }
    }
    while (!pq.empty()) {
        ans.push_back(pq.top().first);
        pq.pop();
    }
    return ans;
}