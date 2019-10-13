#include "tree"
void depth_of_binary_tree(Tree* root)
{
	int depth =-1;
  queue<Tree *>q;
  if(root==NULL)
  {
  	return;
  }

  q.push(root);
  while(q.empty()!=true)
  { 
  	depth+=1;
  	int count=q.size();
  	while(count>0)
  	{
  	Tree *temp=q.front();
  	q.pop();
  	if (temp->left!=NULL)
  	{
  		q.push(temp->left);
  	}
  	if (temp->right!=NULL)
  	{
  		q.push(temp->right);
  	}
    count-=1;


   }

  }
  cout<<"depth of tree is:"<<depth<<" ";

}
int main()
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
     depth_of_binary_tree (ptr);
	return 0;
}