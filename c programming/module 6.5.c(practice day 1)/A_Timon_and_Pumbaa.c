#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int value=a-b;

    if(value>=0)
    {
        printf("%d\n",value);
    }
    else
    {
        printf("0\n");
    }


    return 0;
}
