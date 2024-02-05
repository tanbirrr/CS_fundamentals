#include<bits/stdc++.h> 
 using namespace std; 
 typedef pair<int,int>pii;
 int n,m; 

 const int N=1e2+10; 
 int visited[N][N]; 
 int level[N][N];

 vector<pii>direc={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}}; 
 bool valid(int i,int j)
 { 
     return (i>=0&&i<n&&j>=0&&j<m);

 } 

 void bfs(int si,int sj)
 { 
     queue<pii>q; 
     q.push({si,sj}); 
     visited[si][sj]=true; 
     level[si][sj]=0; 

     while(!q.empty())
     { 
         int ui=q.front().first; 
         int uj=q.front().second; 
         q.pop(); 

         for(pii d:direc)
         { 
             int vi=ui+d.first;  
             int vj=uj+d.second; 

             if(valid(vi,vj)&&!visited[vi][vj])
             { 
                 q.push({vi,vj}); 
                 visited[vi][vj]=true; 
                 level[vi][vj]=level[ui][uj]+1; 
             } 
         } 
     } 
 } 

 void resetVisit()
 { 
     for(int i=0;i<N;i++)
     { 
         for(int j=0;j<N;j++)
         { 
             level[i][j]=0; 
             visited[i][j]=false; 
         } 
     } 
 } 

 int main()
 { 
     int t;
     cin>>t; 
     
     while(t--)
     { 
         cin>>n>>m; 
         int si,sj,di,dj; 
         cin>>si>>sj>>di>>dj; 
         bfs(si,sj);

         if(!visited[di][dj])
         {
            cout<<-1<<endl; 
         } 
         else 
         {
            cout<<level[di][dj]<<endl; 
         }
         
         resetVisit();    
     }



     return 0;
 }