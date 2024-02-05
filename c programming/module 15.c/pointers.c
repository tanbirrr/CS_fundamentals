#include<stdio.h>

int main()
{   
    int x=100;
    int *ptr=&x;
    // printf("x er address -%p\n",&x);
    // printf("ptr er value -%p\n",ptr);
    // printf("ptr er value -%p\n",&ptr);
    // printf("ptr er memory size-%d\n",sizeof(ptr));
   // x=200;
   *ptr=20;

    printf("x er value -%d\n",x);
    printf("x er value -%d\n",*ptr);
    return 0;
}
