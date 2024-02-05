#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    if(n%2==0)
    {
        printf("%d %d\n",a[(n/2)-1],a[((n/2)+1)-1]);
    }
    else
    {
        printf("%d",a[((n+1)/2)-1]);
    }
    return 0;
}
