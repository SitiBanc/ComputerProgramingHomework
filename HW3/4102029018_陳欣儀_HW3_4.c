#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    int i,n,flag=0;
    char strn[30];
    printf("�п�J�r��G");
    gets(strn);
    n=strlen(strn);
    printf("\n�ഫ��r�ꬰ�G");
    for (i=0;i<n;i++)
    {
        if (strn[i] == '"' && flag==0)
        {
            printf("��");
            flag++;
        }
        else if (strn[i] == '"' && flag==1)
            printf("��");
        else
            printf("%c",strn[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
