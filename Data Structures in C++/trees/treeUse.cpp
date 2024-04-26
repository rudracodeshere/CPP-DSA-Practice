#include<iostream>
using namespace std;
#include "treeClass.cpp"
#include<queue>

bool isPresent(TreeNode<int>* root, int x) {
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }

    bool found = false;;
    for(int i = 0;i<root->children.size();i++)
    {
        
        found = isPresent(root->children[i],x);
        if(found == true){
            return true;
        }
    }
    return found;
}

int getLargeNodeCount(TreeNode<int>* root, int x) {
   int count = 0;
   if(root->data>x){
       count++;
   }
   for(int i = 0;i<root->children.size();i++)
   {
       int more = getLargeNodeCount(root->children[i],x);
       count+=more;
   }

   return count;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Base case
    if (root == nullptr) {
        return root;
    }

    TreeNode<int>* ans = root;
    int sum = root->data;

    // Calculate the sum of the root node and its children
    for (int i = 0; i < root->children.size(); i++) {
        sum += root->children[i]->data;
    }

    // Recursively find the max sum node in the subtrees
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childMax = maxSumNode(root->children[i]);
        int childSum = childMax->data;

        // Calculate the sum of the child node and its children
        for (int j = 0; j < childMax->children.size(); j++) {
            childSum += childMax->children[j]->data;
        }

        // Update the answer if the child's sum is greater than the current sum
        if (childSum > sum) {
            sum = childSum;
            ans = childMax;
        }
    }

    return ans;
}

int getLeafNodeCount(TreeNode<int>* root) {
    if(root->children.size()==0){
        return 1;
    }
    int ans = 0;
    for(int i = 0;i<root->children.size();i++){

        ans+=getLeafNodeCount(root->children[i]);

    }
    return ans;
}

int getHeight(TreeNode<int>* root) {
        int max = 0;
    for(int i = 0;i<root->children.size();i++)
    {
        int ans = getHeight(root->children[i]);
        if(ans>max){
            max = ans;
        }
    }
return 1 + max;

}


TreeNode<int>* maxDataNode(TreeNode<int>* root) {
   TreeNode<int>* max = root;

   for(int i = 0;i<root->children.size();i++){
       TreeNode<int>* ans = maxDataNode(root->children[i]);
       if(ans->data>max->data){
           max = ans;
       }

   }

return max;

}

int sumOfNodes(TreeNode<int>* root) {
    int sum = root->data;
    for(int i = 0;i<root->children.size();i++)
    {
        sum+=sumOfNodes(root->children[i]);
    }
    return sum;
}

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


