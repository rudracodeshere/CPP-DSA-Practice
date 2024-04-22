#include<iostream>
using namespace std;
#include "treeClass.cpp"

void print(TreeNode * root){

cout<<root->data<<endl;

for(int i = 0;i<root->child.size();i++){
	print(root->child[i]);
}

}

int main()
{
TreeNode * root = new TreeNode(1);
TreeNode * f = new TreeNode(3);
TreeNode * s = new TreeNode(2);

root->child.push_back(f);
root->child.push_back(s);

print(root);
return 0;
}


