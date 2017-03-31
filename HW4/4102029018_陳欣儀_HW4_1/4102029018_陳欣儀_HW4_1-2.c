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
    printf("請輸入欲刪除人員編號：");
    scanf("%s",&search_id);
    while(1)
    {
        if(fread(&book,sizeof(book),1,fptr)==0)
        {
            printf("找不到這筆資料...");
            exit(0);
        }
        else if(strcmp(book.ID,search_id)==0 && strcmp(book.flag,"*")!=0)
        {
            strcpy(book.flag,"*");
                printf("該人員將被刪除，確定嗎(y/n)?");
                if(toupper(getche()=='Y'))
                {
                    fseek(fptr,sizeof(book)*recno,0);
                    fwrite(&book,sizeof(book),1,fptr);
                    fclose(fptr);
                    printf("\n該人員已被刪除");
                }
                else
                {
                    printf("\n放棄刪除...");
                    exit(0);
                }
        }
    }
}
