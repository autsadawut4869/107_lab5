#include <stdio.h>
int main()
{
	int n,m,sum=0,max=0,k,l,i,j;
	scanf("%d %d",&n,&m);
	int a[n][n],b[m][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			sum += a[i][j];
		}
	}
	printf("%d",sum);
    
    return 0;
}
