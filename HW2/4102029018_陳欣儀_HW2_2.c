#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char*argv[])
{
    int i,j,k;
    printf("設定兩陣列大小(最大為10)：");
    scanf("%d",&i);
    int a[i];
    int b[i];
    if(i>10 || i<1)
    {
        printf("請注意輸入範圍!!!");
        exit(0);
    }
    printf("請輸入A陣列中的%d個陣列元素：",i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&k);
        a[j]=k;
    }
    printf("請輸入B陣列中的%d個陣列元素：",i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&k);
        b[j]=k;
    }
    if(strcmp(a,b)!=0)
        {
            printf("A陣列不等於B陣列");
        }
    else
    {
        printf("A陣列等於B陣列");
    }
    printf("\n");
    system("pause");
    return 0;
}
