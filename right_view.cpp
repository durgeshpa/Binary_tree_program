#include "tree"

 map<int,Tree*>m;
void left_view(Tree *root,int *x,int level)
{
	
  
  //map<int,Tree*>m;
  if (root==NULL)
  {
  	return;
  }
 if( *x<level)
 {
 	cout<<root->data<<endl;
 	*x=level;
 }
 
 left_view(root->right, x, level+1);
 left_view(root->left, x, level+1);
  
  

}

int main(int argc, char const *argv[])
{
	//test case 1
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
// test case 2

   /* Tree *ptr=new Tree(1);
    ptr->left=new Tree(2);
    ptr->left->right=new Tree(4);
    ptr->left->right->right=new Tree(5);
    ptr->left->right->right->right=new Tree(6);
    ptr->right=new Tree(3);
   */
    
    /*
        1
      /   \
    2       3
     \   
      4  
       \
        5
         \
           6
    */
    int max=0;
    left_view(ptr,&max,1);//for no change value;
	return 0;
}