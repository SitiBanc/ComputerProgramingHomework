#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int i,j,k,l,q,r,m,n;
    int flag=0;
    while(flag==0)
    {
    printf("請輸入a矩陣的行高：");
    scanf("%d",&i);
    printf("請輸入a矩陣的列寬：");
    scanf("%d",&j);
    printf("請輸入b矩陣的行高：");
    scanf("%d",&k);
    printf("請輸入b矩陣的列寬：");
    scanf("%d",&l);
    printf("請輸入c矩陣的行高：");
    scanf("%d",&q);
    printf("請輸入c矩陣的列寬：");
    scanf("%d",&r);
    if(j==k && l==q)
        {
            flag=1;
            printf("矩陣可以相乘！\n");
        }
    else
        printf("矩陣無法相乘，請重新輸入！\n\n");
    }
    int a[i][j];
    int b[k][l];
    int c[r][q];
    int t[i][l];
    int d[i][q];
    /*設定a矩陣*/
    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            printf("請輸入a矩陣的第%d行第%d列數字：",(m+1),(n+1));
            scanf("%d",&a[m][n]);
        }
    }
    /*設定b矩陣*/
    for(m=0;m<k;m++)
    {
        for(n=0;n<l;n++)
        {
            printf("請輸入b矩陣的第%d行第%d列數字：",(m+1),(n+1));
            scanf("%d",&b[m][n]);
        }
    }
    /*設定c矩陣*/
    for(m=0;m<q;m++)
    {
        for(n=0;n<r;n++)
        {
            printf("請輸入c矩陣的第%d行第%d列數字：",(m+1),(n+1));
            scanf("%d",&c[m][n]);
        }
    }
    /*a、b矩陣相乘，存入t矩陣*/
    for(m=0;m<i;m++)
    {
        for(n=0;n<l;n++)
        {
            t[m][n]=0;
            for(k=0;k<l;k++)
            {
                t[m][n]+=a[m][k]*b[k][n];
            }
        }
    }
    /*t、c矩陣相乘，存入d*/
    for(m=0;m<i;m++)
    {
        for(n=0;n<q;n++)
        {
            d[m][n]=0;
            for(k=0;k<q;k++)
            {
                d[m][n]+=t[m][k]*c[k][n];
            }
        }
    }
    /*印出矩陣d*/
    printf("a*b*c=\n");
    for(m=0;m<i;m++)
    {
        for(n=0;n<q;n++)
        {
            printf("%d\t",d[m][n]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
