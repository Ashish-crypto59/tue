/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == NULL) return result; 
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* current = q.front();
            q.pop();
            level.push_back(current->val);
            if (current->left != NULL) q.push(current->left);
            if (current->right != NULL) q.push(current->right);
        }
        result.push_back(level);
    }
    return result;
}
void printResult(const vector<vector<int>>& result) {
    for (const auto& level : result) {
        cout << "[";
        for (size_t i = 0; i < level.size(); ++i) {
            cout << level[i];
            if (i != level.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
}
int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> result = levelOrder(root);
    printResult(result);
    return 0;
}
};