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
        printf("�п�J���B�⪺��ӭ�\n�п�J�Ĥ@�ӭȡG");
        scanf("%f",&i);
        printf("�п�J�ĤG�ӭȡG");
        scanf("%f",&j);
        printf("�п�J��N�B��l(+,-,*,/)�G");
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
                printf("\n��J���~�I");
        }
        printf("\n�~��{��?�~��(y)�B�h�X(n)");
        q=getche();
        q=tolower(q);
        printf("\n");
    }while(q=='y');

    printf("\n");
    system("pause");
    return 0;
}
