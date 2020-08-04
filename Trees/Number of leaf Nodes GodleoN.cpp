int countLeaves(Node* root)
{
  // Your code here
  if(root == NULL)
  {
      return 0;
  }
  if(root->right == NULL && root->left == NULL)
  {
      return 1;
  }
  int left = countLeaves(root->left);
  int right = countLeaves(root->right);
  return left + right ; 
}
