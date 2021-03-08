#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int s=n-1,star=1;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
          for(j=n/2;j>=1;j--)
            {
                printf("_");
            }
        }

        for(j=i;j<=n-1;j++)
        {
            printf("*");
        }
        printf("\n");
      }
    return 0;
}
