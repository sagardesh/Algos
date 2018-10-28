// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
    int val,left,right,max = INT_MIN;
    if(root != NULL){
        val = root->data;
        left = findMax(root->left);
        right = findMax(root->right);
        
        if(left > right)
           max = left;
        else
           max = right;
        if(max < val)
           max = val;
    }
    
    return max;
}
// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
    int val,left,right,min = INT_MAX;
    if(root != NULL){
        val = root->data;
        left = findMin(root->left);
        right = findMin(root->right);
        
        if(left < right)
           min = left;
        else
           min = right;
        if(min > val)
           min = val;
    }
    
    return min;
}