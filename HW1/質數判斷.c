#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i,w;
    printf("�п�J�@�Ӿ�ơG");
    scanf("%d", &a);
    if(a==2)
    printf("�O���!!\n");
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
    printf("%d�D���\n",a);
    }
    system("pause");
    return 0;
}
