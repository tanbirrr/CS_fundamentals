#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>0)
        {
            printf("1 ");
        }
        else if(a[i]<0)
        {
            printf("2 ");
        }
        else
        printf("0 ");
    
    }
   
}
