#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char*argv[])
{
    int i,j,k;
    printf("�]�w��}�C�j�p(�̤j��10)�G");
    scanf("%d",&i);
    int a[i];
    int b[i];
    if(i>10 || i<1)
    {
        printf("�Ъ`�N��J�d��!!!");
        exit(0);
    }
    printf("�п�JA�}�C����%d�Ӱ}�C�����G",i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&k);
        a[j]=k;
    }
    printf("�п�JB�}�C����%d�Ӱ}�C�����G",i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&k);
        b[j]=k;
    }
    if(strcmp(a,b)!=0)
        {
            printf("A�}�C������B�}�C");
        }
    else
    {
        printf("A�}�C����B�}�C");
    }
    printf("\n");
    system("pause");
    return 0;
}
