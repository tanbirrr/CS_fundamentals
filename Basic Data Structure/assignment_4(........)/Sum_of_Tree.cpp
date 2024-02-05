#include <bits/stdc++.h> 
using namespace std; 
class Node
{ 
 
    public: 
    int val; 
    Node* left; 
    Node* right; 
  
    Node(int val) 
    { 
         
         this->val= val; 
         this->right= NULL; 
         this->left= NULL; 
     } 
 }; 
 Node *input_tree() 
 { 
     
     Node* root= NULL; 
     queue<Node* > qu; 
     int val; 
     cin>>val; 

     if (val!= -1) 
     { 
         
         root = new Node(val); 
         qu.push(root);

     } 
  
     while (!qu.empty()) 
     { 
         
         Node* temp= qu.front(); 
         qu.pop(); 
  
         int l,r; 
         cin>>l>>r; 
  
         Node* left= NULL; 
         Node* right= NULL; 
  
         if (l != -1) 
         { 
  
             left= new Node(l);

         } 
  

         if (r!= -1) 
         { 
             right= new Node(r); 
         } 
  
         temp->left= left; 
         temp->right= right; 
  
         if (temp->left)
        { 
             qu.push(left); 
         }

         if (temp->right) 
         { 
             qu.push(right); 
         } 
     } 

     return root;

 }
    int sum= 0; 
    void sum_tree(Node *root) 
    { 
     
     if (root == NULL) 
     { 
         return; 
     }; 
     sum += root->val; 
     sum_tree(root->left); 
     sum_tree(root->right); 
 }; 
  
 int main() 

 { 
     Node* root =input_tree(); 
     sum_tree(root); 
     cout<<sum<<endl; 


    return 0;
 }