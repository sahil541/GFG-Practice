class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int>result;
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root == NULL) return result;
        inOrder(root->left);
        result.push_back(root->data);
        inOrder(root->right);
        return result;
    }
};