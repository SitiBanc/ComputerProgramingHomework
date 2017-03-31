#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int m,n,d,a=0,b=0,c=0;
    printf("請輸入高(m)");
    scanf("%d",&m);
    printf("請輸入寬(n)");
    scanf("%d",&n);
    printf("請輸入寬度(d)");
    scanf("%d",&d);
    /*n>2d且m>2d*/
  while (a<=n)
    {
           printf("*");
            a++;
    }
    while (b<=m-1)
    {
        printf("*\n");
        b++;
    }
    system("PAUSE");
    return 0;
}
