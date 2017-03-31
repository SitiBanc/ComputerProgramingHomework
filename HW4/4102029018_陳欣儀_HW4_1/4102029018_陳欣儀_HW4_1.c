#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,flag_m=0;
    printf("歡迎使用通訊程式\n\n");
    printf("1.新增人員\n2.刪除人員\n3.修改人員\n4.查詢人員\n5.列出所有人員\n\n");
    do
    {
        printf("請輸入選項：");
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
                printf("\n沒有這個選項，請重新輸入！\n\n");
        }
    }while(flag_m==0);


    printf("\n");
    system("pause");
    return 0;
}
