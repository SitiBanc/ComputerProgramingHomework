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
                    printf("人員編號：%s\n",book.ID);
                    printf("人員名稱：%s\n",book.Name);
                    printf("人員生日：%d\n",book.Birthday);
                    printf("人員電話：%s\n\n",book.PhoneNumber);
                   }
                }
                fclose(fptr);
}
