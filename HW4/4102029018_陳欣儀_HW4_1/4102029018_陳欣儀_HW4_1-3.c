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
	printf("\n�п�J���ק�H���s���G");
	scanf("%s",search_id);
	rewind(fptr);
	while(1)
	{
		if(fread(&book, sizeof(book), 1, fptr)==NULL)
		{
			printf("�䤣��o�����...");
			exit(0);
		}
		else
		{
			if(strcmp(book.ID, search_id)==0 && strcmp(book.flag, "*")!=0)
			{
				printf("\n");
				printf("�п�J�H���W�١G");
				gets(book.Name );
				printf("�п�J�H���ͤ�G");
				gets(n_birthday);
				book.Birthday = atoi(n_birthday);
				printf("�п�J�H���q�ܡG");
				gets(book.PhoneNumber);
				printf("�T�w�n�ק��(Y/N)�H");
				if(toupper(getche())=='Y')
				{
					fseek(fptr, sizeof(book)*recno, 0);
					fwrite(&book, sizeof(book), 1, fptr);
					fclose(fptr);
					break;
				}
				else
				{
					printf("\n\n���ק�...\n");
					exit(0);
				}
			}
		}
	}
	printf("\n�H���ק粒��...\n");
}
