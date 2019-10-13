#include "tree"
class tree_node
{public:
	//int data;
	int level;
	Tree*root;

	tree_node(Tree* root,int lavel)
	{
		//this->data=root->data;
		this->root=root;
		level=lavel;
		//cout<<this->level;
	}

};
int tree_top_view(Tree *root)
{
	int left=0;
	int right=0;

  map<int,Tree*> m;
  queue<tree_node*>q;
  if(root==NULL)
  	return 0;
  else 
  	q.push(new tree_node(root,0));
  while(q.size()>0)
  {
  	tree_node *ptr=q.front();
  	q.pop();
  	root=ptr->root;
  	//cout<<ptr->level<<"  ";
  	//cout<<ptr->root->data <<" ";
  	if (m.count(ptr->level)==0)
  	{
  		m[ptr->level]=ptr->root;
  		//cout<<"jwhf";
  		cout<<ptr->root->data<<" ";
  	}
  	if (root->left!=NULL)
  	{
  		//cout<<"jwhf";
  		int x=ptr->level-1;
  		q.push(new tree_node(root->left,x));
  		
  	}
  	if (root->right!=NULL)
  	{
  		int x=ptr->level+1;
  		q.push(new tree_node(root->right,x));
  	}
 
  }

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
     tree_top_view(ptr);
	return 0;
}
