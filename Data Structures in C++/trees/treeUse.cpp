#include<iostream>
using namespace std;
#include "treeClass.cpp"
#include<queue>

TreeNode * inputLevel(){
int d;
cout<<"Enter data: ";
cin>>d;
TreeNode * root = new TreeNode(d);
queue<TreeNode *> q;
q.push(root);

while(!q.empty()){
	TreeNode * front = q.front();
	q.pop();
	int n;
	cout<<"Child Count for "<<front->data<<": ";
	cin>>n;
	for(int i = 0;i<n;i++){
		int c;
		cout<<"Enter DATA: ";
		cin>>c;
		TreeNode * child = new TreeNode(c);
		front->child.push_back(child);
		q.push(child);
	}
}
return root;
}

TreeNode * input()
{
int d;
cout<<"Enter DATA: ";
cin>>d;

TreeNode * root = new TreeNode(d);
int n;
cout<<"Child Count "<<d<<": ";
cin>>n;
for(int i = 0;i<n;i++){
TreeNode * child = input();
root->child.push_back(child);
}
return root;
}

void print(TreeNode * root){
if(root == NULL){
return;
}
cout<<root->data<<": ";
for(int i = 0;i<root->child.size();i++){
	cout<<root->child[i]->data<<",";
}
cout<<endl;
for(int i = 0;i<root->child.size();i++){
	print(root->child[i]);
}

}


void printLvl(TreeNode * root)
{
queue<TreeNode * > q;
q.push(root);
while(!q.empty()){
TreeNode * front = q.front();
q.pop();

cout<<front->data<<": ";
for(int i = 0;i<front->child.size();i++){
	cout<<front->child[i]->data<<",";
	q.push(front->child[i]);
}
cout<<endl;
}
}

int main()
{
/*TreeNode * root = new TreeNode(1);
TreeNode * f = new TreeNode(3);
TreeNode * s = new TreeNode(2);

root->child.push_back(f);
root->child.push_back(s);
*/
TreeNode * root = inputLevel();
printLvl(root);
return 0;
}


