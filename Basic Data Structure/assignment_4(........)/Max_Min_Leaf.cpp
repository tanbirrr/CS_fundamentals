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
         this->val = val; 
         this->right = NULL; 
         this->left = NULL; 
     }

 };

 Node* input_level() 
 { 

     Node* root= NULL; 
     queue<Node* >qu; 
     int val; 
     cin>>val; 
     if(val != -1) 
     { 
         root = new Node(val); 
         qu.push(root); 
     } 
  
     while (!qu.empty()) 
     { 
         Node *temp = qu.front(); 
         qu.pop(); 
  
         int l, r; 
         cin >> l >> r; 
         Node *left = NULL; 
         Node *right = NULL; 
         if (l != -1) 
         { 
  
             left = new Node(l); 
         } 
  
         if (r != -1) 
         { 
             right = new Node(r); 
         } 
  
         temp->left= left; 
         temp->right= right; 
  
         if(temp->left) 
         { 
             qu.push(left); 
         } 
         if(temp->right) 
         { 
             qu.push(right); 
         } 
     } 


     return root; 
 }
  
 int min(Node *root) 
 { 
     if (root== NULL) 
     { 
         return INT_MAX; 
     }
     if (root->left== NULL && root->right == NULL) 
     { 
         return root->val; 
     }
     int l= min(root->left); 
     int r= min(root->right); 
     return min(l, r); 
 }

 int maxLeaf(Node *root) 
 { 
     if (root== NULL) 
     { 
         return INT_MIN; 
     }
     if (root->left== NULL && root->right == NULL) 
     { 
         return root->val; 
     }
     int l= maxLeaf(root->left); 
     int r= maxLeaf(root->right); 
     return max(l, r); 
 }
  
 int main() 
 { 
     Node *root= input_level(); 
     int mn= min(root); 
     int mx= maxLeaf(root); 
     cout<<mx<<" "<<mn; 




  return 0;
 }