#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i,j,k,t;
    int m;
    printf("�п�J���X�̪��Ʀr�ӼơG");
    scanf("%d",&i);
    int a[i];
    for (j=0;j<i;j++)
    {
        printf("�п�J��%d�Ʀr�G",j+1);
        scanf("%d",&a[j]);
    }
    for (j=i;j>0;j--)    /*��w�Ƨ�*/
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
    printf("\n�Ƨǫᬰ�G");
    for (j=0;j<i;j++)    /*�L�X�Ƨǫ᪺�Ʀr*/
    {
        printf("%d\t",a[j]);
    }
    printf("\n�侭�����G\nE\n");
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
