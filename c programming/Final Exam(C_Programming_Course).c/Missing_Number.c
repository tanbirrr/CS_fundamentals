#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int sum,a,b,c;
        scanf("%d %d %d %d",&sum,&a,&b,&c);
        int missing_num;
        missing_num=sum-(a+b+c);
        printf("%d\n",missing_num);
    }
    return 0;
}
