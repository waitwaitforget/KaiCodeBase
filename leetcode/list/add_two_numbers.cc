#include "list.h"

ListNode* ListAlgo::addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0;
    ListNode dummy(-1);
    ListNode* prev = &dummy;
    for (ListNode* p1 = l1, *p2 = l2; 
         p1 != nullptr || p2 != nullptr; 
         p1 = p1 == nullptr ? nullptr : p1->next,
         p2 = p2 == nullptr ? nullptr : p2->next) {
      const int a = p1 == nullptr ? 0 : p1->val;
      const int b = p2 == nullptr ? 0 : p2->val;
      const int value = (a + b + carry) % 10;
      carry = (a + b + carry) / 10;

      prev->next = new ListNode(value);
      prev = prev->next;
    }
    if (carry > 0) {
      prev->next = new ListNode(carry);
    }
    return dummy.next;
}