#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int n,i,j;
    printf("�п�J�Ʀrn(1~30)�G");
    scanf("%d",&n);
    if(n>30 || n<1)
    {
        printf("�Ъ`�N��J�d��!!!");
        exit(0);
    }
    int a[n];
    printf("�п�J%d�ӼƦr(0~100)�G",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(j>100 ||  j<0)
        {
            printf("�Ъ`�N��J�d��!!!");
            exit(0);
        }
        a[i]=j;
    }
    printf("\n�̿�J���ǱƬ��G");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("\n�̿�J�˧ǱƬ��G");
    for(i=n-1;i>=0;i--)
    printf("%d  ",a[i]);
    printf("\n\n");

    system("pause");
    return 0;
}
