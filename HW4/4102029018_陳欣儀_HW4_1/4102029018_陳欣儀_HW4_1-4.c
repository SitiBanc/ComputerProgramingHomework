#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    char ID[50];
    char Name[50];
    int Birthday;
    char PhoneNumber[20];
    char flag[3];
}ContactMember;

void function4(void)
{
    FILE *fptr;
    char search_id[10];
    ContactMember book;
    fptr=fopen("ContactMemberData.txt","r");
    printf("�п�J���d�ߤH���s���G");
    scanf("%s",&search_id);
    rewind(fptr);
    while(1)
    {
        if(fread(&book,sizeof(book),1,fptr)==0)
        {
            printf("�䤣��o�����...");
            exit(0);
        }
        else if(strcmp(book.ID,search_id)==0 && strcmp(book.flag,"*")!=0)
        {
            printf("�H���W�١G%s\n",book.Name);
            printf("�H���ͤ�G%d\n",book.Birthday);
            printf("�H���q�ܡG%s\n",book.PhoneNumber);
        }
    }
}
