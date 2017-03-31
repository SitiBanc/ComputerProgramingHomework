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
    printf("請輸入數學組和公式中的n：");
    scanf("%d",&n);
    printf("請輸入數學駔和公式中的m：");
    scanf("%d",&m);
    if (n<m)
        printf("n值不得小於m！");
    else
    {
        ans=fC(n,m);
        printf("組合公式(%d,%d)=%d",n,m,ans);
    }
    printf("\n");
    system("pause");
    return 0;
}
