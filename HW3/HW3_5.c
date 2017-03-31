#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i,j,k,t;
    printf("請輸入集合裡的數字個數：");
    scanf("%d",&i);
    int ary[i];
    for (j=0;j<i;j++)
    {
        printf("請輸入第%d數字：",j+1);
        scanf("%d",&ary[j]);
    }
    for (j=i;j>0;j--)    /*氣泡排序*/
    {
        for (k=0;k<=j;k++)
        {
            if (ary[k]>ary[k+1])
            {
                t=ary[k];
                ary[k]=ary[k+1];
                ary[k+1]=t;
            }
        }
    }
    printf("\n排序後為：");
    for (j=0;j<i;j++)    /*印出排序後的數字*/
    {
        printf("%d\t",ary[j]);
    }
    printf("其冪集有：\nE\n");
    for (j=0;j<i;j++)
    {
        printf("%d\n",ary[j]);
    }
    for (j=0;j<i;j++)
    {
        for (k=j+1;k<i;k++)
        {
            printf("%d\t%d\n",ary[j],ary[k]);
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
