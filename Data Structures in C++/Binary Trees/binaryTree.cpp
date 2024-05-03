#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
	queue<BinaryTreeNode<int>*> q;
	q.push(root);

	while(!q.empty())
	{
		BinaryTreeNode<int>* front = q.front();
		q.pop();
		cout<<front->data<<":";
		if(front->left!=NULL){
			q.push(front->left);
			cout<<"L:"<<front->left->data<<",";
		}
		else{
			cout<<"L:-1,";
		}

		if(front->right!=NULL){
			q.push(front->right);
			cout<<"R:"<<front->right->data;
		}
		else{
			cout<<"R:-1";
		}

		cout<<endl;
	}
}
