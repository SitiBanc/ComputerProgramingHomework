#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i,w;
    printf("請輸入一個整數：");
    scanf("%d", &a);
    if(a==2)
    printf("是質數!!\n");
    else{
w=1;
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
  w=0;
  break;
    }
    }
    if(w==0)
    ;
    else
    printf("%d非質數\n",a);
    }
    system("pause");
    return 0;
}
