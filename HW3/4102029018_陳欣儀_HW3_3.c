#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int all_total,total,sum,count=0;   //all_total=�`�ռơBtotal=��ո���`�ơBsum=��ո�ƥ[�`�Bcount_over=�W�X�����`��
    int i,j,t;   //i=�`�ռƯ��ޡBj=��կ���
    double over_a,avg;   //over_a=��ո�ƶW�X�����ʤ���Bavg=��ո�ƥ���
    printf("�п�J����`�ռơG");
    scanf("%d",&all_total);
    double over_avg[all_total];
    for (i=0;i<all_total;i++)
    {
        printf("�п�J��%d�ո���`�ơG",i+1);
        scanf("%d",&total);
        int ary[total];
        for (j=0;j<total;j++)
        {
            printf("�п�J��%d�ո�Ʋ�%d����ơG",i+1,j+1);
            scanf("%d",&t);
            sum+=t;
            ary[j]=t;
        }
        avg=sum/total;
        for (j=0;j<total;j++)
        {
            if (ary[j]>avg)
                count++;
        }
        double c=count,n=total;    //�ഫ��ƫ��A
        over_a=c*100/n;
        over_avg[i]=over_a;
        /*�k�s*/
        sum=0;
        count=0;
    }
    printf("\n");
    for (i=0;i<all_total;i++)
    {
        printf("��%d�ո�ƶW�X�����ʤ���%.2f%%\n",i+1,over_avg[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
