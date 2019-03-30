#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
		int getHeight(Node* root){
            if(root->left == NULL && root->right == NULL) 
                return 0;
            else if(root->left != NULL && root->right == NULL) {
                return 1+getHeight(root->left);
            }
            else if(root->right != NULL && root->left == NULL) {
                return 1+getHeight(root->right);
            }
            else {
                return 1+max(getHeight(root->left), getHeight(root->right));
            }
        }

}; //End of Solution
