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

void function2()
{
    FILE *fptr;
    char search_id[10];
    ContactMember book;
    int i,j=0,recno;
    fptr=fopen("ContactMemberData","a+");
    printf("�п�J���R���H���s���G");
    scanf("%s",&search_id);
    while(1)
    {
        if(fread(&book,sizeof(book),1,fptr)==0)
        {
            printf("�䤣��o�����...");
            exit(0);
        }
        else if(strcmp(book.ID,search_id)==0 && strcmp(book.flag,"*")!=0)
        {
            strcpy(book.flag,"*");
                printf("�ӤH���N�Q�R���A�T�w��(y/n)?");
                if(toupper(getche()=='Y'))
                {
                    fseek(fptr,sizeof(book)*recno,0);
                    fwrite(&book,sizeof(book),1,fptr);
                    fclose(fptr);
                    printf("\n�ӤH���w�Q�R��");
                }
                else
                {
                    printf("\n���R��...");
                    exit(0);
                }
        }
    }
}
