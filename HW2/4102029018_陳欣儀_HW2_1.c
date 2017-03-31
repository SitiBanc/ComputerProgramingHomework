#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int n,i,j;
    printf("請輸入數字n(1~30)：");
    scanf("%d",&n);
    if(n>30 || n<1)
    {
        printf("請注意輸入範圍!!!");
        exit(0);
    }
    int a[n];
    printf("請輸入%d個數字(0~100)：",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(j>100 ||  j<0)
        {
            printf("請注意輸入範圍!!!");
            exit(0);
        }
        a[i]=j;
    }
    printf("\n依輸入順序排為：");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\n依輸入倒序排為：");
    for(i=n-1;i>=0;i--)
    printf("%d  ",a[i]);
    printf("\n\n");

    system("pause");
    return 0;
}
