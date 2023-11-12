
#include "tree.h"

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans = "";
        if (root == nullptr) return ans;
        ans += to_string(root->val) + "#";
        ans += serialize(root->left) + "|";
        ans += serialize(root->right);
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.size() == 0) return nullptr;
        return nullptr;
    }
};

TreeNode* buildTree(vector<int> nums, int left, int right) {
    if (left > right) return nullptr;
    TreeNode* node = new TreeNode(nums[left]);
    int mid = left + (right - left) / 2;
    node->left = buildTree(nums, left + 1, mid);
    node->right = buildTree(nums, mid+1, right);
    return node;
}

void preorder(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->val << ", ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    vector<int> nums({1,2,3,4,5,6});
    TreeNode* root = buildTree(nums, 0, nums.size()-1);
    preorder(root);

    Codec encoder;
    cout << encoder.serialize(root);

    return 0;
}