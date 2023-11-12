#include "common.h"


#include "array.h"
#include "tree.h"
#include "list.h"

int main() {
    ArrayProblemSet sol;
    vector<int> nums {2, -1, 1,1, 2};
    
    LRUCache lru(10);
    // 
    vector<int> nums2 {1,1,1,2,2,3};
    print(sol.lc347TopKFrequent(nums2, 2));
    return 0;
}