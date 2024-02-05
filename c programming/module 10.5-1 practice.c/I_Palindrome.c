#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
     scanf("%s",s);
    int slen=strlen(s);
    int is_palindrome=1;
    int i=0,j=slen-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
           is_palindrome=0;
           break;
        }
        i++;
        j--;
    }
    if(is_palindrome==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
