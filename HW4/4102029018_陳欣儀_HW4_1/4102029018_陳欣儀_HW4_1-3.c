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

void function3()
{
    FILE *fptr;
	char search_id[10], n_birthday[8], n_phonenum[10];
	ContactMember book;
	int recno=0;
	fptr=fopen("ContactMember.txt", "r+");
	printf("\n請輸入欲修改人員編號：");
	scanf("%s",search_id);
	rewind(fptr);
	while(1)
	{
		if(fread(&book, sizeof(book), 1, fptr)==NULL)
		{
			printf("找不到這筆資料...");
			exit(0);
		}
		else
		{
			if(strcmp(book.ID, search_id)==0 && strcmp(book.flag, "*")!=0)
			{
				printf("\n");
				printf("請輸入人員名稱：");
				gets(book.Name );
				printf("請輸入人員生日：");
				gets(n_birthday);
				book.Birthday = atoi(n_birthday);
				printf("請輸入人員電話：");
				gets(book.PhoneNumber);
				printf("確定要修改嗎(Y/N)？");
				if(toupper(getche())=='Y')
				{
					fseek(fptr, sizeof(book)*recno, 0);
					fwrite(&book, sizeof(book), 1, fptr);
					fclose(fptr);
					break;
				}
				else
				{
					printf("\n\n放棄修改...\n");
					exit(0);
				}
			}
		}
	}
	printf("\n人員修改完成...\n");
}
