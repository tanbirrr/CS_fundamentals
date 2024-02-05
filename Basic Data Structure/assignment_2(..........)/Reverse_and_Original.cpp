#include <bits/stdc++.h> 
using namespace std; 
  
 class Node
 { 
   public: 
   long long int val; 
   Node* next; 
  Node(int val)
  { 
     
     this->val= val; 
     this->next= NULL; 
   }
 };
  

 void insertTail(Node* &head,Node* &tail,int val)
 
 { 
     Node* newNode= new Node(val); 
     
     if(head == NULL)
     { 
         head= newNode; 
         tail= newNode; 
         
         return; 
     } 
     tail->next= newNode; 
     tail= newNode; 
 }

  
 void printList(Node * head)
 
 { 
     Node* temp= head; 
  
     while (temp!= NULL) 

     { 
         cout<<temp->val<<" "; 
         temp= temp->next; 
     } 
  
 } 

  
 int sizeCount(Node* head)

 { 
     Node* temp= head; 
     int count= 0; 
     while (temp!= NULL) 
     { 
         count++; 
         temp= temp->next; 
     } 

     return count; 
 }
  
 void reverseList(Node* head)
 { 
     if(head== NULL)
     
     { 
         return; 
     } 
     reverseList(head->next);
     {

     cout<<head->val<< " ";
     
     } 
 }
  
  
 int main()
 
 { 
     Node* head= NULL; 
     Node* tail= NULL;   
  
     while (true) 

     { 
        long long int n; 
        {
        cin>>n; 
        }
        if(n== -1)
        { 
          break; 
        } 

        insertTail(head,tail,n); 
     } 

  
    reverseList(head); 
    {
        cout<<endl; 
    }
    printList(head); 
  
  
  
  return 0;
 }