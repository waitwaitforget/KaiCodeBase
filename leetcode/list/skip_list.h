
#include "../common.h"
#include "node.h"

// https://blog.csdn.net/tjcwt2011/article/details/117226670
struct SkipListNode {
    int val;
    SkipListNode* next = nullptr;
    SkipListNode* down = nullptr;
    SkipListNode(int x): val(x), next(nullptr), down(nullptr);
};

class SkipList {
public:
    SkipListNode* find(int x) {
        SkipListNode* p = top;
        while (1) {
            while (p->next->val < x) {
                p = p->next;
            }
            if (p->down == nullptr) {
                return p->next;
            }
            p = p->down;
        }
        return nullptr;
    }

    int randomLevel() {
        int k = 1;
        while (random() > 0.1) {
            k++;
        }
        return k;
    }
public:
    SkipListNode* top;
    int level = 0;
};