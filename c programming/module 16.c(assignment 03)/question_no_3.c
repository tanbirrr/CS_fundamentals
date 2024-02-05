#include<stdio.h>
int count_before_zero(int a[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=count_before_zero(a,n);
    printf("%d\n",ans);

    return 0;
}
