#include <bits/stdc++.h> 
  
using namespace std; 
  
typedef pair<int,int> pii; 
  
const int N=1e3+5;

vector<vector<char>>g(N); 
bool visited[N][N]; 
int n,m; 
  
 vector<pii>dest={{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 
  
 bool Valid(int i,int j) 
 { 
     return (i >= 0 && i < n && j >= 0 && j < m); 
 } 

  
 void dfs(int i,int j) 
 
 { 
     if (!Valid(i, j)) 
     { 
         return; 
     } 
     if (g[i][j] == '-') 
     {
         return; 
     }
     if (visited[i][j])
     { 
         return; 
     }

     visited[i][j]= true; 
     for (pii vapir: dest) 
     { 
         int ci=vapir.first; 
         int cj=vapir.second; 
  
         dfs(i + ci,j + cj); 
     } 
 }
  

 int main() 
 { 
     cin>>n>>m; 

     for (int i= 0;i<n;i++) 
     { 
         for (int j= 0;j< m;j++) 
         { 
             char c; 
             cin>>c; 
             g[i].push_back(c); 
         } 
     } 
  
     int si,di,sj,dj; 
     cin>>si>>sj>>di>>dj; 
     dfs(si,sj);

     if (visited[di][dj]) 
     { 
         cout<<"YES"<<endl; 
     } 
     else 
     { 
         cout<<"NO"<<endl; 
     } 










  return 0;
  
 }