#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m,n,d,i,j;
	printf("請輸入高(m)");
	scanf("%d",&m);
	printf("請輸入寬(n)");
	scanf("%d",&n);
	printf("請輸入厚度(d)");
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
		for(j=0;j<n;j++)
            {
			printf("*");
            }
		printf("\n");
	}
	for(i=0;i<m-2*d;i++)
        {
		for(j=0;j<d;j++)
            {
			printf("*");
            }
		for(j=0;j<n-2*d;j++)
            {
			printf(" ");
            }
		for(j=0;j<d;j++)
            {
			printf("*");
            }
		printf("\n");
        }
	for(i=0;i<d;i++)
	{
		for(j=0;j<n;j++)
            {
			printf("*");
            }
		printf("\n");
	}
	return 0;
}
