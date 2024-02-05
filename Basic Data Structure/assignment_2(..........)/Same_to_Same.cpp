#include<bits/stdc++.h> 
using namespace std; 


 class Node 

 { 
     public: 
     int val; 
     Node*next; 
     Node(int val) 

     { 
         this->val= val; 
         this->next= NULL; 
     };
 }; 
 void insertNode(Node* &head,Node* &tail,int val) 

 { 
     Node* newNode= new Node(val); 
     if(head== NULL) 

     { 
         head= newNode; 
         tail= newNode;
         
         return; 
     } 

     tail->next= newNode; 
     tail= newNode; 
 } 

 bool cmp(Node* head,int len1,Node* Head,int len2) 

 { 
     if(len1== len2) 

     { 
         Node* tmp1= head; 
         Node* tmp2= Head; 

         while(tmp1!= NULL) 
         { 
             if(tmp1->val!= tmp2->val) 
             { 
                 return false; 
             } 
             tmp1= tmp1->next; 
             tmp2= tmp2->next; 

         } 

         return true; 
     } 

     else 

     { 
         return false; 
     } 
 } 
 int len(Node* head) 
 { 
     Node* tmp= head; 
     int count= 0; 
     while(tmp!= NULL) 
     { 
         count++; 
         tmp= tmp->next; 
     } 

     return count; 
 } 


 int main() 
 { 
     Node* head= NULL; 
     Node* tail= NULL; 
     int val; 

     while(true) 
     { 
         cin>>val; 
         if(val== -1)
         {
            break;
         } 
         insertNode(head,tail,val); 
     } 

     int len1= len(head); 
     Node* head1= NULL; 
     Node* tail1= NULL; 

     int Val1; 
     while(true)

     { 
         cin>>Val1; 
         if(Val1== -1)
         {
            break;
         }

         insertNode(head1,tail1,Val1); 

     } 
     int len2= len(head1); 
     if(cmp(head,len1,head1,len2)== true)
     {
        cout<<"YES";
     }

     else
     {
        cout<<"NO"; 
     }
  


    return 0;
 }