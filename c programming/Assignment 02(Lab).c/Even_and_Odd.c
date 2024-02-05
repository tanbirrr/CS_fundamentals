#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int v;
    int evenSum=0;
    int oddSum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v);
        if(v%2==0)
        {
            evenSum=evenSum+v;
        }
        else
        {
            oddSum=oddSum+v;
        }

    }
    printf("%d %d",evenSum,oddSum);
    return 0;
}
