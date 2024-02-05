#include<bits/stdc++.h> 
using namespace std; 
 int main()

 { 

     int t;
     cin>>t;

     while(t--)

     { 
         int n;
         cin>>n; 
         int a[n],b[n];
         int flag=1; 

         for(int i=0;i<n;i++)
         { 
             cin>>a[i]; 
             b[i]=a[i]; 
         } 

         sort(a,a+n);

         for(int i=0;i<n;i++)
         { 
             if(a[i]!=b[i])
             { 
                 flag=0; 
                 break; 
             }
             else
             { 
                 continue; 
             } 
         } 

         if(flag)
         { 
             cout<<"YES"<<endl; 
         }
         else
         { 
             cout<<"NO"<<endl; 
         }
          
     } 


     return 0;

 }