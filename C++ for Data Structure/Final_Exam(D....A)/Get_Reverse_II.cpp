 #include<bits/stdc++.h> 
 using namespace std; 
 class Students 
 { 
     public: 
         string nm; 
         int cls; 
         char s; 
         int id; 
 }; 
 int main() 
 { 
     int n; 
     cin>>n; 
     Students ar[n]; 
     for (int i= 0; i<n; i++) 
     { 
         cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id; 
     } 
     int k=n-1; 
     for (int i=0; i<n; i++) 
     { 
        cout<<ar[i].nm<<" "<<ar[i].cls<<" "<< ar[i].s<<" "<<ar[k].id<<endl; 
         k--; 
     } 


     
       
     return 0;
 }