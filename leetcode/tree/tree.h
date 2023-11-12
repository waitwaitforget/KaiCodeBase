#include "../common.h"

struct TreeNode {
    int val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

void pre_order(const TreeNode* root, vector<int>& result) {
    const TreeNode* p;
    stack<const TreeNode*> s;
    p = root;
    if (p != nullptr) s.push(p);
    while (!s.empty()) {
        p = s.top();
        s.pop();
        result.push_back(p->val);
        if (p->right != nullptr) s.push(p->right);
        if (p->left != nullptr) s.push(p->left);
    }
    
}

class TreeAlgo {
    void preOrder(TreeNode* root) {
        vector<int> nums;
        pre_order(root, nums);
    }
};

void pre_order_reverse(const TreeNode* root, vector<int>& result) {
    if (root == nullptr) return;
    result.push_back(root->val);
    pre_order_reverse(root->left, result);
    pre_order_reverse(root->right, result);
}

