#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=0,p=0;
    for(int i=0;i<n;i++)
    {
        int t1,p1;
        scanf("%d %d",&t1,&p1);
        if(t1>p1)
        {
            t++;
        }
        else if(t1<p1)
        {
            p++;
        }
    }
        if(t>p)
        {
            printf("Tiger\n");
        }
        else if(t<p)
        {
            printf("Pathan\n");
        }
        else
        {
            printf("Draw\n");
        }
    return 0;
}
