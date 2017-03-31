#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int all_total,total,sum,count=0;   //all_total=總組數、total=單組資料總數、sum=單組資料加總、count_over=超出平均總數
    int i,j,t;   //i=總組數索引、j=單組索引
    double over_a,avg;   //over_a=單組資料超出平均百分比、avg=單組資料平均
    printf("請輸入資料總組數：");
    scanf("%d",&all_total);
    double over_avg[all_total];
    for (i=0;i<all_total;i++)
    {
        printf("請輸入第%d組資料總數：",i+1);
        scanf("%d",&total);
        int ary[total];
        for (j=0;j<total;j++)
        {
            printf("請輸入第%d組資料第%d筆資料：",i+1,j+1);
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
        double c=count,n=total;    //轉換資料型態
        over_a=c*100/n;
        over_avg[i]=over_a;
        /*歸零*/
        sum=0;
        count=0;
    }
    printf("\n");
    for (i=0;i<all_total;i++)
    {
        printf("第%d組資料超出平均百分比為%.2f%%\n",i+1,over_avg[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
