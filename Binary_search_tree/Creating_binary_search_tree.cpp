#include <bits/stdc++.h>
using namespace std;
class Tree
{public:
	int data;
	Tree* left=NULL;
	Tree* right=NULL;
	Tree(int data)
	{
		this->data=data;
	}
};
Tree* Create(Tree *root,int data)
{
	if (root!=NULL)
     { 
     	cout<<"tree allready exist:";
		return root;
     }
	 root=new Tree( data);
	return root;
}
void add_element(Tree *root,int data)
{
	if(root->left==NULL && root->data>data)
	{
		
		root->left=new Tree(data);
		return;
	}
	if(root->right==NULL&& root->data<data)
	{
		root->right=new Tree(data);
		return;
	}
	if(root->data>data)
	{
		add_element(root->left, data);
	}
	if(root->data<data)
	{
		add_element(root->right, data);
	}
	if(root->data==data)
	{
		cout<<"\n equal element not allowed\n";
		return; // because equal element not allowed
	}



}

void print(Tree * root)
{
	if (root==NULL)
	{
		return;/* code */
	}
	print(root->left);
    cout<<root->data<<"  ";
	print(root->right);

}
int main(int argc, char const *argv[])
{
	int x;
	Tree *root=NULL;
	while(1)
	{
		cout<<"enter your option:"<<endl;
		cout<<"1 create tree \n2 add_elment\n3 print_inorder\n4 exit:\n";
		cin>>x;
		if (x==1)
		  { int data;
		  	cout<<"\nenter data:";
            cin>>data;
           root=Create(root,data);
		  }
		  if(x==2)
		  {int data;
		  	cout<<"\nenter data:";
            cin>>data;
            add_element(root, data);
         }

         if (x==3)
         {
         	print(root);
         }
         if (x==4)
         {
         	break;//or exit(0)

         }
	}
	return 0;
}


