#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      if(root != NULL) {
          cout << root->data << " " ;
          queue<Node *> q;
          q.push(root);
          while(!q.empty()) {
              Node *temp = q.front();
              q.pop();
              if (temp->left != NULL)
                cout << temp->left->data << " " ;
              if (temp->right != NULL)
                cout << temp->right->data << " ";
              if(temp->left != NULL)
              q.push(temp->left);
              if(temp->right != NULL)
              q.push(temp->right);
          }
      }
  	
  
	}

};//End of Solution
