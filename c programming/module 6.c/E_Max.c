#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a,max=INT_MIN,min=INT_MAX;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d %d\n",max,min);
    return 0;
}
