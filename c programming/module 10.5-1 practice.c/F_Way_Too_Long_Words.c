#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
      char s[101];
      scanf("%s",s);
    int slen=strlen(s);
    if(slen<=10)
    {
        printf("%s\n",s);
    }
    else if(slen>10)
    {
      printf("%c%d%c\n",s[0],slen-2,s[slen-1]);
    }

    }

    
    return 0;

}
