#include"tree"
class temprary
{
public:

	int digonal_number;
 Tree *root;
 temprary(Tree*root,int digonal_number)
 {
 	this->root=root;
 	this->digonal_number=digonal_number;
 }

};






void digonal_trevarse(Tree *root)
{
	map<int,list<Tree*>>m;
	queue<temprary*>q;
	if (root==NULL)
	{
		return;
	}
	q.push(new temprary(root,0));
	while(q.empty()!=true)
	{ temprary *ptr=q.front();
		q.pop();
		if (m.count(ptr->digonal_number)==0)
		{ //cout<<ptr->digonal_number;
			m[ptr->digonal_number].push_back(ptr->root);
		}
		else
			m[ptr->digonal_number].push_back(ptr->root);
		if (ptr->root->left!=NULL)
		{

			q.push(new temprary(ptr->root->left,ptr->digonal_number+1));
		}
		if (ptr->root->right!=NULL)
		{
			q.push(new temprary(ptr->root->right,ptr->digonal_number));
		}	
	}



for (auto x:m)
{
	for (auto y:x.second)
	{
		cout<<y->data<<" \t";
	}
	cout<<"\n";
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
    digonal_trevarse(ptr);
	return 0;
}