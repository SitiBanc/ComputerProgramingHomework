#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,flag_m=0;
    printf("�w��ϥγq�T�{��\n\n");
    printf("1.�s�W�H��\n2.�R���H��\n3.�ק�H��\n4.�d�ߤH��\n5.�C�X�Ҧ��H��\n\n");
    do
    {
        printf("�п�J�ﶵ�G");
        scanf("%d",&i);
        switch (i)
        {
            case 1:
                function1();
                flag_m=1;
                break;
            case 2:
                function2();
                flag_m=1;
                break;
            case 3:
                function3();
                flag_m=1;
                break;
            case 4:
                function4();
                flag_m=1;
                break;
            case 5:
                function5();
                flag_m=1;
                break;
            default:
                printf("\n�S���o�ӿﶵ�A�Э��s��J�I\n\n");
        }
    }while(flag_m==0);


    printf("\n");
    system("pause");
    return 0;
}
