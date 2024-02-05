#include<stdio.h>

int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[t+1];
    for(int i=0;i<t+1;i++)
    {
        cnt[i]=0;
    }
   for(int i=0;i<n;i++)
   {
    cnt[a[i]]++;
   }
   for(int i=1;i<t+1;i++)
   {
    printf("%d\n",cnt[i]);
   }


    return 0;
}
