#include "tree"
void tree_image(Tree *root)
{
	if (root==NULL)
		return ;
	//if root->left 
	tree_image(root->left);
    tree_image(root->right);
    Tree *temp=root->left;
    root->left=root->right;
    root->right=temp;
}
void tree_display(Tree *root)
{
	if (root==NULL)
		return;
	tree_display(root->left);
      cout<<root->data<< " ";
     tree_display(root->right);

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
    //actual tree

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
// image of tree
    /*                  
    
    */
    tree_display(ptr);
    tree_image(ptr);
    cout<<"\n";
    tree_display(ptr);
	return 0;

}