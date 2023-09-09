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
    int findSecondMinimumValue(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* node = root;
        set<int> inorder;
        int res = 0;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            } else {
                if(st.empty() == true) break;
                node = st.top();
                st.pop();
                inorder.insert(node->val);
                node = node->right; 
            }
        }
        vector<int> v;
        for(auto i : inorder){
            v.push_back(i);
        }
        return v.size() > 1 ? v[1] : -1;
    }
};