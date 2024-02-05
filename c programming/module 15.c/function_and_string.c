#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    printf("%d\n",strlen(ar));
}

int main()
{
    char ar[20]="hellooo";
    fun(ar);
    return 0;
}
