#include<stdio.h>
//global
int x=500;
void fun(void)
{
    // int s=100;
    // printf("fun s address -%p\n",&s);
    printf("fun x address-%p\n",&x);
}
int main()
    
{   
    
    // int s=100;
    // printf("main s address-%p\n",&s);
    // fun();
     printf("main x address-%p\n",&x);
     fun();
    
    return 0;
}
