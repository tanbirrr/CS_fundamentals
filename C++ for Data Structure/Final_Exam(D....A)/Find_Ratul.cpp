#include<bits/stdc++.h> 
 using namespace std; 
 int main() 
 { 
     string s; 
     getline(cin,s); 
     stringstream ss(s); 
     string t; 
     int count=0; 
     while(ss>>t) 
     { 
         if(t=="Ratul") 
         { 
             count++; 
         } 
     } 
  
     if(count>0) 
     { 
         cout<<"YES"<<endl; 
     } 
     else 
     { 
         cout<<"NO"<<endl; 
     } 
     
     
     return 0;
 }