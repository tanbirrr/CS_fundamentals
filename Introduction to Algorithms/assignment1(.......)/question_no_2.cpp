#include<bits/stdc++.h> 
using namespace std; 

int binarySearch(int l,int r,int a[],int x)
{ 
     if(l==r)
     {
     return -1; 
     }
     int mid=(l+r)/2;    
     if(a[mid]==x)
     {
     return mid; 
     }
     else if(a[mid]>x)binarySearch(l,mid,a,x); 
     else if(a[mid]<x)binarySearch(mid+1,r,a,x); 

 } 
 int main()
 { 
     int n;
     cin>>n; 
     int a[n]; 
     
     for(int i=0;i<n;i++)cin>>a[i]; 
     int x;
     cin>>x; 
     int v=binarySearch(0,n-1,a,x); 
     if(v==-1)
     {
        cout<<"Not Found"; 
     }
     else
     {
        cout<<v;
     }




     return 0;
 }