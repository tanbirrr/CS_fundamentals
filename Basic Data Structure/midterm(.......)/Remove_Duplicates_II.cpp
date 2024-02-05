#include<bits/stdc++.h> 
using namespace std; 


int main() 
  
 { 
  
     list<int>List; 
     int v; 
     while(true) 
     { 
         cin>>v; 
         if(v== -1)
         {
            break; 
         }
        List.push_back(v); 
     }

     List.sort(); 
     List.unique();

     for(int val:List) 
     { 
         cout<<val<< " "; 
     } 
  

    return 0;
 }