#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int capital=0,small=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        else
        {
           small++;
        }
      
    }
      printf("%d %d\n",capital,small);
    return 0;
}
