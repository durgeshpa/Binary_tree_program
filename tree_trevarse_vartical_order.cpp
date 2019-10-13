#include "tree"



class Node//for mapping 
{
public:
 int value;
 Tree *root;
 Node(Tree *root,int value)
 {
 	this->root=root;
 	this->value=value;

 }

};
void vartical(Tree *root)
{
   map<int,list<Node*>>m;//for mapping according to shorted and vartical order
   queue<Node*>q;//for spiral trevarsal or level wise treversal
   if (root==NULL)
   {
   	return;
   }
   	q.push(new Node(root,0));
   while(q.size()>0)
   {
   	Node *temp=q.front();
   	q.pop();
   	if (m.count(temp->value)==0)//for mapping with new element
   	{
   		m[temp->value].push_back(temp);
      //cout<m[temp->value].m[0];
      //auto ptr=m.begin();
      //cout<<temp->value <<" ";
      cout<<m[temp->value].front()->root->data<< " ";

   	}
   	else
   		m[temp->value].push_back(temp);//once map value present and map another node at same position
    if (temp->root->left!=NULL)
    {
    `  q.push(new Node(temp->root->left,temp->value-1));

    }
    if (temp->root->right!=NULL)
    {
    	q.push(new Node(temp->root->right,temp->value+1));
    }

   //cout<<"heh ";
   }

 for (auto ptr:m)
 {
 
  //cout<<ptr.first;

 	for (auto temp :ptr.second)
 	{
    cout<<temp->root->data<<" ";
    
 		
 	}
  cout<<"\n";
 }

return;

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
    vartical(ptr);
	return 0;
}