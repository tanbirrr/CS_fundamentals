
int main()
{
    int eye,mouth,body,ans;
    int min=0;
    scanf("%d %d %d",&eye,&mouth,&body);
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
    int eye1=eye-min;
    int mouth1=mouth-min;
    int body1=body-min;
    int new3=eye1/2;
    if(new3<=body1)
    {
      printf("%d\n",new3+min);
    }
    else
    {
        printf("%d\n",body1+min);
    }


    return 0;


}
