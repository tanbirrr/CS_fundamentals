int main()
{
    int n;
    scanf("%d",&n);

    if(n>=10000)
    {
        printf("Gucci Bag\n");
        
        if(n>20000)
        {
            printf("Gucci Belt");
        }
    }
    else if(n>=5000)
    {
        printf("Levis Bag");

    }
    else
        printf("Something");
     return 0;
}
