#include <bits/stdc++.h> 
using namespace std; 
  
 int main() 
 { 
     int t; 
     cin>>t; 
     cin.ignore(); 
     while (t--) 
     { 
  
         string s; 
         getline(cin,s); 
         stringstream ss(s); 
         string word; 
         map<string,int>mp; 
         int mx =INT_MIN; 
         string track; 

         while (ss>>word) 
         { 
             mp[word]++; 
             if (mp.count(word)&&mp[word]> mx) 
             { 
                 track= word; 
                 mx= max(mx, mp[word]); 
             } 
         } 

         cout <<track<<" "<<mx<<endl; 
         } 



         return 0;
 }