#include"tree"
class temprary
{int digonal_number;
 Tree *root;
 temprary(Tree*root,int digonal_number)
 {
 	this->root=root;
 	this->digonal_number=digonal_number;
 }

};

void digonal_trevarse(Tree *root)
{
	map<int,list<Tree>>m;
	queue<temprary*>q;
	if (root==NULL)
	{
		return;
	}
	q.push(new temprary(root,0));
	while(q.empty()!=true)
	{
		
	}




}