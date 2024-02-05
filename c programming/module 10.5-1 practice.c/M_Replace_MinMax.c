#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min_idx,max_idx;
    int min=INT_MAX,max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            min_idx=i;
        }
        if(max<a[i])
        {
            max=a[i];
            max_idx=i;
        }

    }

    for(int i=0;i<n;i++)
    { 
       a[max_idx]=min;
       a[min_idx]=max;
       printf("%d ",a[i]);

    }

    return 0;
}
