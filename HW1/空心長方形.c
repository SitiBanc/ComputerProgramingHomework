#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int m,n,d,a=0,b=0,c=0;
    printf("�п�J��(m)");
    scanf("%d",&m);
    printf("�п�J�e(n)");
    scanf("%d",&n);
    printf("�п�J�e��(d)");
    scanf("%d",&d);
    /*n>2d�Bm>2d*/
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
