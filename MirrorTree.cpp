void mirror(struct Node* node) {
    // code here
    // Md Sahil Kaif
    
    /*We will first do postorder traversal of binary tree, where we firstly
        1. Traverse the left subtree, i.e., call Postorder(left-subtree)
        2. Traverse the right subtree, i.e., call Postorder(right-subtree)
        3. Visit the root.
     */
    
    if(node == NULL) return;
    
    if(node->left != NULL)
    {
        mirror(node->left);
    }
    if(node->right != NULL)
    {
        mirror(node->right);
    }
    
    //For every node, we will swap it’s left child with its right child.
    
    struct Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
    
}