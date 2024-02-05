#include<stdio.h>

int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}

int main()
{
    
    printf("%d\n",sum(1,20));
    printf("%d\n",sum(1,1));
    
    return 0;
}
