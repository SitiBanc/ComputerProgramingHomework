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
        printf("\n�п�J�H���s���G");
        scanf("%s",&book.ID);
        printf("�п�J�H���W�١G");
        scanf("%s",&book.Name);
        printf("�п�J�H���ͤ�G");
        scanf("%d",&book.Birthday);
        printf("�п�J�H���q�ܡG");
        scanf("%s",&book.PhoneNumber);
        fwrite(&book,sizeof(book),1,fptr);
        printf("�O�_�~��s�W(y/n)�H");
        if(toupper(getche())=='Y')
            q=0;
        else
            q=1;
    }while(q==0);

}
