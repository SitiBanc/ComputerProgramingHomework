#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i,j,k,t;
    int m;
    printf("請輸入集合裡的數字個數：");
    scanf("%d",&i);
    int a[i];
    for (j=0;j<i;j++)
    {
        printf("請輸入第%d數字：",j+1);
        scanf("%d",&a[j]);
    }
    for (j=i;j>0;j--)    /*氣泡排序*/
    {
        for (k=0;k<=j;k++)
        {
            if (a[k]>a[k+1])
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    printf("\n排序後為：");
    for (j=0;j<i;j++)    /*印出排序後的數字*/
    {
        printf("%d\t",a[j]);
    }
    printf("\n其冪集有：\nE\n");
    for (j=0;j<i;j++)
    {
        printf("%d\n",a[j]);
        for (k=j;k<i;k++)
        {
            if (a[j]<a[k])
            {
                printf("%d\t%d\n",a[j],a[k]);
                for (m=k;m<i;m++)
                {
                    if (a[k]<a[m])
                        printf("%d\t%d\t%d\n",a[j],a[k],a[m]);
                }
            }

        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
