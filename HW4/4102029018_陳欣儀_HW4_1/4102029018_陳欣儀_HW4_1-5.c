#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ID[50];
    char Name[50];
    int Birthday;
    char PhoneNumber[20];
    char flag[3];
}ContactMember;

void function5(void)
{
    ContactMember book;
    FILE *fptr;
    fptr=fopen("ContactMemberData.txt","r");
                printf("\n");
                while(fread(&book,sizeof(book),1,fptr)!=NULL)
                {
                   if(strcmp(book.flag,"*")!=0)
                   {
                    printf("�H���s���G%s\n",book.ID);
                    printf("�H���W�١G%s\n",book.Name);
                    printf("�H���ͤ�G%d\n",book.Birthday);
                    printf("�H���q�ܡG%s\n\n",book.PhoneNumber);
                   }
                }
                fclose(fptr);
}
