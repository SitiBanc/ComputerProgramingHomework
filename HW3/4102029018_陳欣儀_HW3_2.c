#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

float plus(float x,float y)
{
    float ans;
    ans=x+y;
    return ans;
}

float minus(float x,float y)
{
    float ans;
    ans=x-y;
    return ans;
}

float times(float x,float y)
{
    float ans;
    ans=x*y;
    return ans;
}

float divide(float x,float y)
{
    float ans;
    ans=x/y;
    return ans;
}

int main(int argc,char *argv[])
{
    float i,j;
    char op,q;
    do
    {
        printf("請輸入欲運算的兩個值\n請輸入第一個值：");
        scanf("%f",&i);
        printf("請輸入第二個值：");
        scanf("%f",&j);
        printf("請輸入算術運算子(+,-,*,/)：");
        op=getche();
        switch (op)
        {
            case '+':
                printf("\n%.2f+.%2f=%.2f",i,j,plus(i,j));
                break;
            case '-':
                printf("\n%.2f-%.2f=%.2f",i,j,minus(i,j));
                break;
            case '*':
                printf("\n%.2f*%.2f=%.2f",i,j,times(i,j));
                break;
            case '/':
                printf("\n%.2f/%.2f=%.2f",i,j,divide(i,j));
                break;
            default:
                printf("\n輸入錯誤！");
        }
        printf("\n繼續程式?繼續(y)、退出(n)");
        q=getche();
        q=tolower(q);
        printf("\n");
    }while(q=='y');

    printf("\n");
    system("pause");
    return 0;
}
