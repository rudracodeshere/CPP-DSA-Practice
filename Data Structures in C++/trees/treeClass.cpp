#include<vector>
class TreeNode{
public:
int data;
vector<TreeNode *> child;
TreeNode(int data){
	this->data = data;
}
};
