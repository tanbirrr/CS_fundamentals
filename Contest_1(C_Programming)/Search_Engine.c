#include <stdio.h>

int main()
{
    int test;
    
    scanf("%d", &test);
    
    for (int i = 1; i <= test; i++)
    {
        int N;
        scanf("%d", &N);
        
        int a[N];

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[j]);
        }
        int find;
        scanf("%d", &find);
        
        int pos= -1;
        
        for (int j = 0; j < N; j++)
        {
            if (a[j] == find)
            {
                pos= j + 1;
                break;
            }
        }
        
        if (pos != -1)
        {
            printf("Case %d: %d\n", i, pos);
        } else {
            printf("Case %d: Not Found\n", i);
        }
    }
     return 0;
}