int height(struct Node* node)
{
    //code here
    if(node == NULL) return 0;
    
    int lHeight = height(node->left);
    int rHeight = height(node->right);
    
    if(lHeight > rHeight)
    return (lHeight+1);
    else
    return (rHeight+1);
    
}