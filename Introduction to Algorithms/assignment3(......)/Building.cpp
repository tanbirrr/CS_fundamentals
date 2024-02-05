#include <bits/stdc++.h> 
using namespace std; 
  
 class Edge 
 { 
 public: 
     int u,v,w; 
     Edge(int u,int v,int w) 
     { 
         this->u= u; 
         this->v= v; 
         this->w= w; 
     } 
 }; 
  
 bool cmp(Edge a,Edge b) 
 { 
     return a.w < b.w; 
 } 

  
 const int N=1e5+ 5; 
  
 vector<int> parent(N,-1); 
 vector<int> parent_Level(N,0); 
  
 int dsu_leader(int node) 
 { 
     while (parent[node]!= -1) 
     { 
         node= parent[node]; 
     }

     return node; 
 }

  
 void dsu_union(int u,int v) 
 { 
     int leaderA= dsu_leader(u); 
     int leaderB= dsu_leader(v); 
  
     if (leaderA!= leaderB) 
     { 
         if (parent_Level[leaderA]> parent_Level[leaderB]) 
         { 
             parent[leaderB]= leaderA; 
         } 

         else if (parent_Level[leaderB]> parent_Level[leaderA]) 
         { 
             parent[leaderA]= leaderB; 
         } 
         else 
         { 
             parent[leaderB]= leaderA; 
             parent_Level[leaderA]++; 
         } 
     } 
 }
  
 int main() 
 { 
     int n,m; 
     cin>>n>>m; 
     vector<Edge> edges; 
     vector<Edge> final_List; 
     for (int i= 0;i< m;i++) 
     { 
         int u,v,w; 
         cin>>u>>v>>w; 
         Edge edge(u,v,w); 
         edges.push_back(edge); 
     }

     sort(edges.begin(), edges.end(), cmp); 
     for (Edge edge: edges) 
     { 
         int u= edge.u; 
         int v= edge.v; 
         int w= edge.w; 
  
         int leaderA= dsu_leader(u); 
         int leaderB= dsu_leader(v); 
  
         if (leaderA== leaderB) 
         { 
             continue; 
         } 
  
         final_List.push_back(edge); 
         dsu_union(u,v); 
     }; 
     long long int mn= 0; 

     if (final_List.size()!=n- 1) 
     { 
         cout<<-1<<endl; 
     } 
     else 
     { 
         for (Edge ed:final_List) 
         { 
             mn +=(long long int)(ed.w); 
         } 

         cout<<mn<<endl; 
         
     }






     return 0;


 }