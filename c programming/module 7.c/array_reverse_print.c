#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
     int ar[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        
        sum=sum+ar[i]; 
    }
  printf("%d ",sum);


    return 0;
}
