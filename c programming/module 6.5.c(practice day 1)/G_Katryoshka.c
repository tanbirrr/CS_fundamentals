#include<stdio.h>

int main()
{
    long long int eye,mouth,body,ans;
    long long int min=0;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    if(eye<=mouth && eye<=body)
    {
        min=min+eye;
    }
    else if(mouth<=eye && mouth<=body)
    {
        min=min+mouth;
    }
    else{
        min=min+body;
    }
    long long int eye1=eye-min;
    long long int mouth1=mouth-min;
    long long int body1=body-min;
    long long int new3=eye1/2;
    if(new3<=body1)
    {
      printf("%lld\n",new3+min);
    }
    else
    {
        printf("%lld\n",body1+min);
    }


    return 0;
}
