#include<bits/stdc++.h>  
using namespace std; 
  
 class Node

 { 
   public: 
   int val; 
   Node* next; 
  
   Node(int val)
   { 
     
     this->val=val; 
     this->next =NULL;

   } 
 };
  
 void insertTail(Node* &head, Node* &tail, int val)

 { 

     Node* newNode = new Node(val);

     if(head == NULL)
     { 
         head = newNode; 
         tail = newNode; 
         return; 
     }

     tail->next = newNode; 
     tail = newNode; 
 }; 
  
 void printList(Node* head)
 { 
     Node* temp = head; 
  
     while (temp != NULL) 

     { 
         cout<<temp->val<<" "; 
         temp=temp->next; 
     } 
  
 }; 
  
 int sizeCount(Node* head)
 { 
     Node* temp = head; 
     int count = 0; 
     while (temp != NULL) 
     { 
         count++; 
         temp=temp->next; 
     } 
     return count; 

 }; 
  
 void sortList(Node* head)
 { 
     Node* i = head; 
  
     while (i->next != NULL) 
     { 
         Node* j =i->next; 
         while (j != NULL) 
         { 

            if(i->val < j->val)
            { 
                 swap(i->val, j->val); 
            } 
            j =j->next;

         } 
         i = i->next; 

     } 
  
 }; 
  
 void midNum(Node* head)
 { 
     int size = sizeCount(head); 
     int mid =(size + 1)/2; 
     Node* temp = head; 
     int i = 0; 

     while (i < mid - 1) 
     { 
        temp = temp->next; 
        i++; 
     } 

     if(size% 2 == 0)
     
     { 
         cout<<temp->val<<" "<<temp->next->val;  
     }
     else
     { 
         cout<<temp->val; 
     } 

  
 }; 
  
 int main()
 { 
     Node* head = NULL; 
     Node* tail = NULL;   
  
     while (true) 

     { 
        int num; 
        cin>>num; 
        if(num == -1) 
          break; 

        insertTail(head, tail, num); 

     } 

     sortList(head); 
  
     midNum(head);


  return 0;


 }