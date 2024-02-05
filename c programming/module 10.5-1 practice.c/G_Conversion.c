#include<stdio.h>
#include<string.h>

int main()
{
    char s[100001];
    gets(s);
    int slen=strlen(s);

    for(int i=0;i<slen;i++)
    {
        if(s[i]==',')
        {
            printf(" ");
        }
        else if(s[i]>= 'a' && s[i]<= 'z')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]+32);
        }
    }
    return 0;
}
