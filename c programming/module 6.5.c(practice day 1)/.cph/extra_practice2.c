#include<stdio.h>

int main()
{
    long long int e,m,b;
    scanf("%lld %lld %lld",&e,&m,&b);
    
    long long int min=0;
    if(e<=m && e<=b)
    {
        min=e;
    }
    else if(m<=e && m<=b)
    {
        min=m;
    }
    else
    {
        min=b;
    }
    long long int e2=e-min;
    long long int m2=m-min;
    long long int b2=b-min;

    long long int e3=e2/2;
    
    if(e3<=b2)
    {
        printf("%d\n",e3+min);
    }
    else{
          printf("%d\n",b2+min);
    }

    return 0;
}
