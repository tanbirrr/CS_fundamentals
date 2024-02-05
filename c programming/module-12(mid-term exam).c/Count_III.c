#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        
        cnt[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {  
        
       printf("%c - %d\n",i+97,cnt[i]);
    }
    return 0;
}
