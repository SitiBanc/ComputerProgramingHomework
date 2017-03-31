#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  		int i, j;
		for (i=9; i>=1; i--)
		{
			for(j=9; j>=1; j--)
			{
				printf("%d*%d=%d\t", j,i,(i * j));
			}
			printf("\n");
		}
  system("PAUSE");
  return 0;
}
