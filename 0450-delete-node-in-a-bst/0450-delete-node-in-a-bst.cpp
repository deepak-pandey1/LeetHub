class Solution {
public:
    TreeNode* maxValue(TreeNode* root) {
        if(root == NULL) return NULL;

    	TreeNode* temp = root;
    	while(temp->right != NULL)
        		temp = temp->right;
    	return temp;
    }


    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(root->val == key){
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            else if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else{
                TreeNode* maxi = maxValue(root->left);
                root->val = maxi->val;
                root->left = deleteNode(root->left, maxi->val);
			    return root;
            }
        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else
            root->right = deleteNode(root->right, key);

        return root;
    }
};