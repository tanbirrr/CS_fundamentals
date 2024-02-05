#include<bits/stdc++.h> 
using namespace std; 

#define ll long long 
const int N=1e5+5; 
 int parent[N]; 
 int parent_Size[N]; 
 void dsu_set(int n)
 { 
     for(int i=1;i<=n;i++)
     { 
         parent[i]=-1; 
         parent_Size[i]=1; 
     } 
 } 
 int dsu_find(int n)
 { 
     while(parent[n]!=-1)
     { 
         n=parent[n]; 
     } 
     return n; 
 } 

 void dsu_union(int a,int b)
 { 
     int leaderA=dsu_find(a); 
     int leaderB=dsu_find(b); 

     if(leaderA!=leaderB)
     { 
         if(parent_Size[leaderA]>parent_Size[leaderB])
         { 
             parent[leaderB]=leaderA; 
             parent_Size[leaderA]+=parent_Size[leaderB]; 
         }
         else
         { 
             parent[leaderA]=leaderB; 
             parent_Size[leaderB]+=parent_Size[leaderA]; 
         } 
     } 
 } 

 int main()
 { 
     int n,e;
     cin>>n>>e; 
     dsu_set(n); 
     int count=0; 
     while(e--)
     { 
         int a,b;cin>>a>>b; 
         int leaderA=dsu_find(a); 
         int leaderB=dsu_find(b); 

         if(leaderA==leaderB)
         {
            count++; 
         }
         else 
         {
            dsu_union(a,b); 
         }    
     } 



     cout<<count; 


     return 0;



 }