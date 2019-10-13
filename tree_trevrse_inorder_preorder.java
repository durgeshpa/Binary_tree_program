import Tree.*;
import java.io.*; 
import java.util.*; 

/*class Tree
{
	int data;
	Tree left;
	Tree right;
	Tree(int x)
	{
		data=x;
		left=null;
		right=null;
		
	}
}*/
 class print
 {
 	public static void Inorder(Tree root)
 	{
 		if (root==null)
 		{
 			return;
 		}
 		Inorder(root.left);
 		//System.out.print(+root.data+" ");
        Inorder(root.right);
        System.out.print(+root.data+" ");
 	}
 }
 class print_stack
 {
 	public static void preorder(Tree root)
 	{
 		Stack<Tree>s=new Stack<Tree>();
 		
  		while(s.empty()!=true || root!=null)
  		{
  			if (root!=null)
  			{
  				System.out.print( root.data +" ");
  				s.push(root);
  				root=root.left;
  			}
  			else
  			{
  				root=s.pop();
  				root=root.right;
  			}
  		}
 	}
 }

 class print_stacks
 {
 	public static void inorder(Tree root)
 	{
 		Stack<Tree>s=new Stack<Tree>();
 		while(s.empty()!=true ||root!=null)
 		{
 			if(root!=null)
 			{
 				s.push(root);
 				root=root.left;
 			}
 			else
 			{
 				root=s.pop();
 			   System.out.print(root.data+" ");
 			   root=root.right;
 			}
 		}
 	}
 }
 class print_stackp
 {
 static Stack<Tree>s=new Stack<Tree>();
  static Stack<Tree>temp=new Stack<Tree>();
   public static void postorder(Tree root)
   {
    while(s.empty()!=true||root!=null)
    {    
    	if(root!=null)
    	{
    		temp.push(root);
    		s.push(root);
    		root=root.right;
    	}
    	else
    	{
    		root=s.pop();
    		root=root.left;
    	}

    }

    while(temp.empty()!=true)
    {
    	root=temp.pop();
    	//System.out.println("");
    	System.out.print(root.data+" ");
    }
    System.out.println("");
   }



 }
 class obj
 {
 	Tree node;
 	int value;
 	obj(Tree root,int x)
 	{
 		node=root;
 		value=x;
 	}


 }





 class Prints
 {
 	//SortedDictionary< int,List<Tree>>s=new SortedDictionary<int,List<Tree>>();
 	public static  void VarticalOrder(Tree root)
 	{ int left=0;
 		int right=0;
       SortedMap<Integer,List<obj> >sm = new TreeMap<Integer,List<obj>>(); 
       Queue< obj>li=new LinkedList<obj>();
       obj ob=new obj(root,0);
       	li.add(ob);
       while(li.isEmpty()!=true || root!=null)
       {

       	  while(li.size()>0)
       	  {
             //obj x= li.First();
             obj x =li.remove();
             int j=x.value;
             if (li.ContainsKey(x.value)) {
             	
             };            

       	  }


       }




 	}
 }


 class Main{
 	public static void main(String[] args) {
 		Tree ptr=new Tree(20);
 		ptr.left=new Tree(9);
 		ptr.left.left=new Tree(6);
 		ptr.left.right=new Tree(14);
 		ptr.left.right.left=new Tree(10);
 		ptr.left.right.right=new Tree(16);
 		ptr.left.left.left=new Tree(4);
 		ptr.left.left.right=new Tree(7);
 		ptr.right=new Tree(30);
 		ptr.right.left=new Tree(24);
 		ptr.right.right=new Tree(40);
    
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
     print.Inorder(ptr);
     System.out.println("");
     print_stack.preorder(ptr);
     System.out.println("");
     print_stacks.inorder(ptr);
     print_stackp.postorder(ptr);
     System.out.println("");
 	 print.Inorder(ptr);
 	}
 }






