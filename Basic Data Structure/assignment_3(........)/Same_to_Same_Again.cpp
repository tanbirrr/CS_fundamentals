#include<bits/stdc++.h> 
using namespace std;

 class Node
 { 
     public: 
     int val; 
     Node* next; 
     Node* prev; 
     Node(int val)
     { 
             this->val=val; 
             this->next=NULL; 
             this->prev=NULL; 
         } 
 };

 class myStack
 { 
     public: 
     Node* head=NULL; 
     Node* tail=NULL; 
     int sz=0; 
     void push(int val)
     { 
             sz++; 
             Node* newNode=new Node(val); 
             
             if(head==NULL)
             { 
                 head=newNode; 
                 tail=newNode; 
                 return; 
             } 
             tail->next=newNode; 
             newNode->prev=tail; 
             tail=newNode; 
         } 
         void pop()
         { 
             sz--; 
             Node* deleteNode=tail; 
             tail=tail->prev;

             if(tail==NULL)
             { 
                head=NULL;  
             }
             else
             { 
                 tail->next=NULL; 
             } 
             delete deleteNode; 
         } 

         int top()
         { 
             return tail->val; 
         } 
         int size()
         { 
             return sz; 
         } 
         bool empty()
         { 
             if(sz==0)
             {
                return true; 
             }
             else 
             {
                return false;
             } 
         } 
 }; 

 class myQueue
 { 
     public: 
     Node* head=NULL; 
     Node* tail=NULL; 
     int sz=0; 
     void push(int val)
     { 
             sz++; 
             Node* newNode=new Node(val);    
             
             if(head==NULL)
             { 
                 head=newNode; 
                 tail=newNode; 
                 return; 
             }

             tail->next=newNode; 
             newNode->prev=tail; 
             tail=newNode; 
         } 
         void pop()
         { 
             sz--; 
             Node* deleteNode=head; 
             head=head->next; 
             
             if(head==NULL)
             { 
                 tail=NULL; 
                 delete deleteNode; 
                 return; 
             } 
             head->prev=NULL; 
             delete deleteNode; 
         } 
         
         int front()
         { 
             return head->val; 
         } 
         int size()
         { 
             return sz; 
         } 
         bool empty()
         { 
             if(!sz)return true; 
             else return false; 
         } 
 }; 

 int main()
 { 
     myStack st; 
     myQueue q; 
     bool flag=true; 
     int m;cin>>m; 
     int n;cin>>n;

     for(int i=0;i<m;i++)
     { 
         int x;
         cin>>x; 
         st.push(x); 
     }

     for(int i=0;i<n;i++)
     { 
         int x;cin>>x; 
         q.push(x); 
     } 
     if(m==n)
     { 
         while (!q.empty())
         { 
             if(q.front()!=st.top()){ 
             flag=false; 
             break; 
         } 
             q.pop();st.pop(); 
         }    
     }
     else
     {
        flag=false;
     } 

     if(flag)
     {
        cout<<"YES"<<endl;
     } 
     else 
     {
        cout<<"NO"<<endl;
     } 




     return 0;
 }