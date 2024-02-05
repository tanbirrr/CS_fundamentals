#include <bits/stdc++.h> 
using namespace std; 
  
class ListNode 
{ 
     public: 
     string val; 
     ListNode* next; 
     ListNode* prev; 
     ListNode(string val)
     { 
         this->val= val; 
         this->next= NULL; 
         this->prev= NULL; 
     
     } 
 }; 
  
 void insert_tail(ListNode* &head,ListNode* &tail,string val)
 
 { 
     
     ListNode* newNode=new ListNode(val); 
     if(head == NULL)
     { 
         head= newNode; 
         tail= newNode; 
         
         return; 
     }

     tail->next= newNode; 
     newNode->prev= tail; 
     tail= newNode; 
 }; 
  
 void insert_head(ListNode* &head,ListNode* &tail,string val)
 { 
     ListNode* newNode= new ListNode(val); 
     if(head== NULL)
     { 
         head= newNode; 
         tail= newNode; 
         
         return; 
     } 
     newNode->next= head; 
     head->prev= newNode; 
     head= newNode;

 }; 
   
 void print_list(ListNode* head)
 { 
     ListNode* temp= head; 
     while (temp!= NULL) 
     { 
         cout<<temp->val<< " "; 
         temp=temp->next; 
     } 
  
 }; 
  
 
 void reversePrint(ListNode* tail)
 { 
     ListNode* temp = tail; 
     while (temp!= NULL) 
     { 
        
        cout<<temp->val<< " "; 
        temp=temp->prev; 
     
     } 
  
 }; 
  
 int size_count(ListNode* head)
 { 
     int cnt=0; 
     ListNode* temp= head; 
     
     while (temp!= NULL) 
     { 
         cnt++; 
         temp=temp->next; 
     } 
     return cnt; 
 }; 
  
  
 int main()
 { 
     ListNode* head= NULL; 
     ListNode* tail= NULL; 
  
     while (true) 
     { 
         string str; 
         cin>>str; 
         if(str=="end")
         break; 
         insert_tail(head,tail,str); 

     } 
     int n; 
     cin>>n; 
  
     ListNode* temp=head;

     if(head== NULL)
     return 0; 
      
     while (n--) 
     { 
         string ch; 
         cin>>ch; 
         if(ch== "visit")
         { 
             string address; 
             cin>>address; 
             ListNode* newNode= head; 
             bool Available= false; 
        
        while (newNode!= NULL) 
           { 
                    if(newNode->val== address)
                    { 
                         Available= true; 
                         break; 
                     } 
                     if(newNode->next== NULL)
                     { 
                         break; 
                     } 
                     newNode= newNode->next; 
                 } 
            if(Available)
                 
                 { 
                     temp= newNode; 
                     cout<<temp->val<< endl; 
                 }
                 else
                 { 
                     cout<<"Not Available"<<endl; 
                 } 
         }
         else if(ch=="prev")
         { 
             if(temp->prev== NULL)
             
             { 
                 cout<<"Not Available"<<endl; 
             }else
             { 
                 cout<<temp->prev->val<<endl; 
                 temp=temp->prev; 
             } 
         }  
         else if(ch== "next")
         { 
              if(temp->next== NULL)
              { 
                 cout<<"Not Available"<<endl; 
             }\
             else
             { 
                 cout<<temp->next->val<<endl; 
                 temp=temp->next; 
             }

         }
         else
         { 
              cout<<"Not Available"<<endl; 
         } 
     } 
  
  
  
  
  
 
 return 0;

}