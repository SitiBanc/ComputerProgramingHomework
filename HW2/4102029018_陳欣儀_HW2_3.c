#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int i,j,k,l,q,r,m,n;
    int flag=0;
    while(flag==0)
    {
    printf("�п�Ja�x�}���氪�G");
    scanf("%d",&i);
    printf("�п�Ja�x�}���C�e�G");
    scanf("%d",&j);
    printf("�п�Jb�x�}���氪�G");
    scanf("%d",&k);
    printf("�п�Jb�x�}���C�e�G");
    scanf("%d",&l);
    printf("�п�Jc�x�}���氪�G");
    scanf("%d",&q);
    printf("�п�Jc�x�}���C�e�G");
    scanf("%d",&r);
    if(j==k && l==q)
        {
            flag=1;
            printf("�x�}�i�H�ۭ��I\n");
        }
    else
        printf("�x�}�L�k�ۭ��A�Э��s��J�I\n\n");
    }
    int a[i][j];
    int b[k][l];
    int c[r][q];
    int t[i][l];
    int d[i][q];
    /*�]�wa�x�}*/
    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            printf("�п�Ja�x�}����%d���%d�C�Ʀr�G",(m+1),(n+1));
            scanf("%d",&a[m][n]);
        }
    }
    /*�]�wb�x�}*/
    for(m=0;m<k;m++)
    {
        for(n=0;n<l;n++)
        {
            printf("�п�Jb�x�}����%d���%d�C�Ʀr�G",(m+1),(n+1));
            scanf("%d",&b[m][n]);
        }
    }
    /*�]�wc�x�}*/
    for(m=0;m<q;m++)
    {
        for(n=0;n<r;n++)
        {
            printf("�п�Jc�x�}����%d���%d�C�Ʀr�G",(m+1),(n+1));
            scanf("%d",&c[m][n]);
        }
    }
    /*a�Bb�x�}�ۭ��A�s�Jt�x�}*/
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
    /*t�Bc�x�}�ۭ��A�s�Jd*/
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
    /*�L�X�x�}d*/
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
