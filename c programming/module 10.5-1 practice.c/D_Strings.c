#include<stdio.h>
#include<string.h>

int main()
{
    char a[11];
    char b[11];
    gets(a);
    gets(b);
    int alen=strlen(a);
    int blen=strlen(b);
    printf("%d %d\n",alen,blen);
    printf("%s%s\n",a,b);
    
    int temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);
    
    return 0;
}
