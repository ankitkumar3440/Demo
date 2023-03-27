#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
      int data;
      Node*left;
      Node*right;
    Node(int d)
    {
        this->data = d;
        this->left =0;
        this->right =0; 
        
    }
};
Node* buildtree(Node*root)
{
    std::cout << "enter the data" << std::endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1)
    {
        return NULL;
    }
    std::cout << "enter the data for inserting the data to the left of the " << data<<std::endl;
    root->left=buildtree(root->left);
    std::cout << "enter the data for inserting the data to the right of the " << data<<std::endl;
    root->right=buildtree(root->right);
    return root;
}
void levelordertraversal(Node*root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node*temp = q.front();
        
        q.pop();
        if(temp==NULL)
        {
           cout<<endl; 
           if(!q.empty())
           {
            q.push(NULL);
           }
        }
        else{
            std::cout << temp->data<<" "; 
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    }
}
int main()
{
  Node*root=NULL;
  root=buildtree(root);
  levelordertraversal(root);
}