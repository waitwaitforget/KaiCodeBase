#include "../common.h"
#include "LRU.h"

struct ListNode {
    int val;
    ListNode* next = nullptr;
    ListNode(int x): val(x), next(nullptr) {}
};

class ListAlgo {
 public:  
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

};