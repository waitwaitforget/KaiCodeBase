#include "list.h"


ListNode* reverseLinkedListWithPosition(ListNode* head, int m, int n) {
    if (m < 0 || head == nullptr) return head;
    ListNode* dummyHead = new ListNode(-1);
    dummyHead->next = head;

    ListNode* prev = dummyHead;
    for (int i = 0; i < m-1; i++) prev = prev->next;
    ListNode* const head2 = prev;
    prev = head->next;
    ListNode* curr = prev->next;
    for (int i = m; i<n; i++) {
        prev->next = curr->next;
        curr->next = head2->next;
        head2->next = curr;
        curr = prev->next;
    }
    return dummyHead->next;
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr, *p = head;
    while (p) {
        ListNode* next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    return prev;
}

ListNode* constructList(vector<int> &nums) {
    ListNode* head = new ListNode(nums[0]);
    ListNode* p = head;
    for (int i= 1; i<nums.size();i++) {
        p->next = new ListNode(nums[i]);
        p = p->next;
    }
    return head;
}

int main() {
    vector<int> nums{5,2,13,3,8 };
    ListNode *head = constructList(nums);

    ListNode* p = reverseList(head);
    while (p) {
        cout << p->val << ", ";
        p = p->next;
    }
    cout << endl;
    return 0;
}