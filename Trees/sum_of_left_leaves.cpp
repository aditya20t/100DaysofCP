/* Find the sum of all left leaves in a given binary tree.

    3
   / \
  9  20
    /  \
   15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
*/


// Tree's root node has been given to us

bool isLeaf(TreeNode* node) {        // Function to check if the node is a leaf or not
    if(node == NULL) return false;
    if(node->left == NULL and node->right==NULL) return true;
    else return false;
        
}
    
int sumOfLeftLeaves(TreeNode* root) {   
    int sum = 0;
        
    if(root!=NULL) {                    // If root is not null
            
        if(isLeaf(root->left)) {        // Check if the left node to the root is leaf node or not
            sum += root->left->val;      // If yes add that value to sum
        }
        else {                           // Else go to left node and add it's value recursively
            sum += sumOfLeftLeaves(root->left);
        }
            
        sum += sumOfLeftLeaves(root->right);       // go to right tree as well to get their's left leaf value
    }
    return sum;           // return the sum
}
