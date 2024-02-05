#include<bits/stdc++.h> 
using namespace std; 

int main()
{ 
     int n,e;
     cin>>n>>e; 

     long long int dis[n+1][n+1];

     for(int i=0;i<=n;i++)
     { 
         for(int j=1;j<=n;j++)
         { 
             dis[i][j]=LONG_MAX; 
             if(i==j)dis[i][j]=0; 
         } 
     } 

     while(e--)
     { 
         int a,b;
         long long int w;
         cin>>a>>b>>w; 
         dis[a][b]=min(dis[a][b],w); 
     } 

     for(int k=1;k<=n;k++)
     { 
         for(int i=1;i<=n;i++)
         { 
             for(int j=1;j<=n;j++)
             { 
                 if(dis[i][k]<INT_MAX &&dis[k][j]<INT_MAX &&dis[i][k]+dis[k][j]<dis[i][j]){ 
                     dis[i][j]=dis[i][k]+dis[k][j]; 
                 } 
             } 
         } 
     } 

     int t;
     cin>>t;

     while(t--)
     { 
         int x,y;
         cin>>x>>y; 

         if(dis[x][y]==LONG_MAX)
         {
            cout<<-1<<endl; 
         }
         else
         {
            cout<<dis[x][y]<<endl; 
         }
    }








     return 0;
 }