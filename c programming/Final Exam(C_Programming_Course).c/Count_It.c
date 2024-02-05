#include<stdio.h>

int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int c_count=0,s_count=0,space_count=0;
    int i=0;
    while(s[i]!='\0')
    {
      if(s[i]>='A' && s[i]<='Z')
      {
        c_count++;
      }
      else if(s[i]>='a' && s[i]<='z')
      {
        s_count++;
      }
      else
      {
        space_count++;
      }
      i++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n"
    ,c_count,s_count,space_count);

    return 0;
}
