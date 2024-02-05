#include <bits/stdc++.h> 
using namespace std; 
  
 class ListNode

 { 
     public: 
     int val; 
     ListNode* next;
     ListNode(int val)
     { 
         this->val = val; 
         this->next = NULL; 
     } 

 }; 
  
 void insertTail(ListNode* &head,ListNode* &tail,int val)
 { 
     ListNode* newNode= new ListNode(val);

     if(head== NULL)
     { 
         head= newNode; 
         tail= newNode; 
         
         return; 
     }

     tail->next= newNode; 
     tail= newNode; 

 }
  
 
 void printList(ListNode* head)
 { 
    ListNode* temp= head; 
     while (temp!= NULL) 
     { 

         cout<<temp->val<< " "; 
         temp= temp->next; 
     } 
  
 }; 
  
 
 void sort_list(ListNode* head)
 { 
    ListNode* i= head; 
     while (i->next != NULL) 
     {    
         ListNode* j= i->next; 
         while (j!= NULL) 
         { 
             if(i->val>j->val)
             { 
                 swap(i->val, j->val); 
             } 
             j=j->next; 
         } 
        i=i->next; 
     } 
  
 }; 
  
 void removeDuplicates(ListNode* head)
 { 
     ListNode* temp= head; 
    while (temp->next!= NULL) 
     { 
         
         if(temp->val== temp->next->val)
         { 
             ListNode* deleteNode= temp->next; 
             temp->next= deleteNode->next; 
             delete deleteNode; 
         };

         if(temp->next== NULL)
         { 
             break; 
         } 
         if(temp->val!= temp->next->val)
         { 
             temp= temp->next; 
         } 
     } 
 }; 
  
 int main()
 { 
     ListNode* head = NULL; 
     ListNode* tail = NULL; 
     
     while (true) 
     { 
        int n; 
        cin>>n; 
        if(n== -1)
         break; 
         insertTail(head,tail,n); 
     } 
     sort_list(head); 
     removeDuplicates(head); 
     printList(head); 



return 0;
 }