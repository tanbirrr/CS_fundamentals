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
         map<int,int>mp; 
         map<int,int>mp1; 

         while(n--)
         { 
             int x;cin>>x; 
             mp[x]++; 
  
         } 
  
         int max=0; 
         int track; 
  
         for (auto it = mp.begin();it !=mp.end();it++)
         { 
             if (it->second > max)
             { 
                 max = it->second; 
                 track= it->first; 
             }
             
             else if(it->second == max)
             { 
                 if (it->first>track)
                 { 
                     track= it->first; 
                 }                 
  
            } 
         } 

  
         cout<<track<<" "<<max<<endl; 
     
     
     } 

     




     return 0;

 }