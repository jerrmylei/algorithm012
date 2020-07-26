class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n  = preorder.size();
        if(n == 0)
          return NULL;
        TreeNode *root = new TreeNode(preorder[0]);
        vector<int> left_preorder,left_inorder,right_preorder, right_inorder;
        int i = 0;
        for(; i < n; ++i)
        {
            if(inorder[i] == preorder[0])
                break;
            left_inorder.push_back(inorder[i]);
        }
        for(i = i+1; i < n; ++i)
        {
            right_inorder.push_back(inorder[i]);
        }

        for(int j = 1; j < n; ++j)
        {
            if(j < left_inorder.size())
                 left_preorder.push_back(preorder[j]);
            else
            {
                right_preorder.push_back(preorder[j]);
            }
            
        }
        root->left = buildTree(left_preorder, left_inorder);
        root->right = buildTree(right_preorder, right_inorder);
        return root;
    }
};