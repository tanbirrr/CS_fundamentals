#include <bits/stdc++.h> 
using namespace std; 
  
 int main() 
 { 
     int n; 
     cin>>n; 
     vector<int> v; 

     for (int i=0;i<n;i++) 
     { 
         int val; 
         cin>>val; 
         v.push_back(val); 
     } 

     int target; 
     cin>>target; 
     int l=0; 
     int r=v.size()-1; 
     int count=0; 
     
     while (l<= r) 
     { 
         int mid=(l + r) / 2;

         if (v[mid]==target) 
         { 
             count++; 
  
             if (target<v[mid + 1]) 
             { 
                 r=mid- 1; 
             } 
             else 
             { 
                 l=mid+ 1; 
             } 
  
             v[mid]= 0; 
         } 

         else if (target< v[mid]) 
         { 
             r =mid - 1; 
         } 
         else 
         { 
             l=mid + 1; 
         } 
     } 

     if (count>= 2) 
     { 
         cout<<"YES"; 
     } 
     else 
     { 
         cout<<"NO"; 
     }



     return 0;
 }