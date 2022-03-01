/*  Binary Tree
 *  Any node have atmost 2 children
 *  
 *  Maximum nodes at a level L = 2^
 *  Maximum nodes in a tree of height H = 2^H - 1
 *  Minimum heigt to store n nodes H = log_base_2 (N+1)
 *  If a binary tree have L leaves then atleat L is log_base_2 (N+1) + 1
 * 
 */

#include<iostream>

struct Node
{
    int data;
    struct Node* L_child;
    struct Node* R_child;

    Node(int val) {
        data= val;
        L_child= NULL;
        R_child= NULL;
    }
};

/*  Preorder Traversal
 * 
 *  Print root 
 *  then go to left subtree
 *  then go to right subtree
 *  
 */
void preorder (struct Node* root) {

    if (root == NULL) {
        return;
    }
    
    std:: cout << root->data << " ";
    preorder(root->L_child);
    preorder(root->R_child);

}

/*  Inorder Traversal
 *
 *  go to left subtree
 *  Print root
 *  go to right subtree
 * 
 */
void inorder (struct Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->L_child);
    std:: cout << root->data << " ";
    inorder(root->R_child);
}

/*  Postorder Traversal
 *
 *  go to left subtree
 *  go to right subtree
 *  Print root
 * 
 */
void postorder (struct Node* root) {

    if (root == NULL) {
        return;
    }

    postorder(root->L_child);
    postorder(root->R_child);
    std:: cout << root->data << " ";
}

int main () {
    // building a tree
    struct Node* root= new Node(1);
    root->L_child= new Node(2);
    root->R_child= new Node(3);

    /* 
        1
       / \
      2   3
    */

    root->L_child->L_child= new Node(4);
    root->L_child->R_child= new Node(5);
    /* 
        1
       / \
      2   3
     / \
    4   5
    */ 

   root->R_child->L_child= new Node(6);
   root->R_child->R_child= new Node(7);

    preorder(root);
    std:: cout << std:: endl;
    inorder(root);
    std:: cout << std:: endl;
    postorder(root);
}