#include <stdio.h>
#include <stdlib.h>
int fC (int x,int y)
{
    if (x==y || y==0)
        return 1;
    else
    {
        return fC(x-1,y)+fC(x-1,y-1);
    }
}
int main(int argc,char *argv[])
{
    int n,m,ans;
    printf("�п�J�ƾǲթM��������n�G");
    scanf("%d",&n);
    printf("�п�J�ƾ��ʩM��������m�G");
    scanf("%d",&m);
    if (n<m)
        printf("n�Ȥ��o�p��m�I");
    else
    {
        ans=fC(n,m);
        printf("�զX����(%d,%d)=%d",n,m,ans);
    }
    printf("\n");
    system("pause");
    return 0;
}
