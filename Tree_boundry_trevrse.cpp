#include"tree"
void leaf_treverase(Tree *root)
{
	if(root==NULL)
	{
      return;
	}
	if (root->left==NULL&&root->right==NULL)
	{
	    cout<<root->data<<" ";
	}
	leaf_treverase(root->left);
	leaf_treverase(root->right);


}

void tree_right_boundry_treveras(Tree *root)
{
	if(root==NULL)
		return;
	if (root->left==NULL && root->right==NULL)
	    return;
	else
	{tree_right_boundry_treveras(root->right);
		cout<<root->data<<' ';
      
	}
}
void first_left_boundry_trevarse(Tree *root)
{
	if (root==NULL)
	{
		return;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return;
	}
	else
	{   cout<<root->data<<' ';
		first_left_boundry_trevarse(root->left);

	}
}
int main(int argc, char const *argv[])
{
	Tree *ptr=new Tree(20);
    ptr->left=new Tree(9);
    ptr->left->left=new Tree(6);
    ptr->left->right=new Tree(14);
    ptr->left->right->left=new Tree(10);
    ptr->left->right->right=new Tree(16);
    ptr->left->left->left=new Tree(4);
    ptr->left->left->right=new Tree(7);
    ptr->right=new Tree(30);
    ptr->right->left=new Tree(24);
    ptr->right->right=new Tree(40);
    //vartical(ptr);
    /*                  20
                       /   \
                      /     \
                     /       \
                    9         30
                   /  \       / \
                  /    \     /   \
                 6      14  24    40
                / \     / \
               /   \   /   \
              4     7 10   16
	
    */
    first_left_boundry_trevarse(ptr);
    leaf_treverase(ptr);
    tree_right_boundry_treveras(ptr->right);
	return 0;
}