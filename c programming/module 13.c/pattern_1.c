#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { int k=1;
       for(int j=1;j<=k;j++)
       {
        printf("*");
       }
       
       k++;
       printf("\n");
    }
    
}
