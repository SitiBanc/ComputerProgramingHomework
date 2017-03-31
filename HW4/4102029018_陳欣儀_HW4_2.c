#include <stdio.h>
#include <stdlib.h>

int width(int n)
{
   int x,y=1;
   for(x=1;x<n;x++)
   {
       y+=2;
   }
   return y;
}
int main(int argc,char* argv[])
{
    int h,w,i,j;
    printf("½Ð¿é¤J¾ð°ª¡G");
    scanf("%d",&h);
    w=width(h);
    int n=h,m=h;
    for (i=0;i<h;i++)
    {
        for (j=1;j<=w;j++)
        {
            if(j>=n&&j<=m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n-=1;
        m+=1;
    }
    n=h-1;
    m=h+1;
    for(i=0;i<4;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j>=n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
