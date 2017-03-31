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

void function1(void)
{
    FILE *fptr;
    fptr=fopen("ContactMemberData.txt","a+");
    ContactMember book;
    int q=1;
    do
    {
        printf("\n請輸入人員編號：");
        scanf("%s",&book.ID);
        printf("請輸入人員名稱：");
        scanf("%s",&book.Name);
        printf("請輸入人員生日：");
        scanf("%d",&book.Birthday);
        printf("請輸入人員電話：");
        scanf("%s",&book.PhoneNumber);
        fwrite(&book,sizeof(book),1,fptr);
        printf("是否繼續新增(y/n)？");
        if(toupper(getche())=='Y')
            q=0;
        else
            q=1;
    }while(q==0);

}
