#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char*argv[])
{
    int m,n,t=0;
    int i,j,k;    /*�h�B��B�C*/
    int a[3][3][3];    /*�h�B��B�C*/
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("�п�J��%d�h�B��%d��B��%d�C���ȡG",i+1,j+1,k+1);
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    srand((unsigned)time(NULL));
    m=rand()%3;
    srand((unsigned)time(NULL));
    n=rand()%3;
    if(m=0)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                t+=a[n][j][k];
            }
        }
    }
    else if(m=1)
    {
        for(i=0;i<3;i++)
        {
            for(k=0;k<3;k++)
            {
                t+=a[i][n][k];
            }
        }
    }
    else
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                t+=a[i][j][n];
            }
        }
    }
    printf("\n�H������Y�@�����`�M��%d\n\n",t);
    system("pause");
    return 0;
}
