#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear(int x)   /*碻穓碝猭*/
{
    int i,k,num=-1;
    int data[80000];
    for(i=0,k=1;i<80000 && k<=80000;i++,k++)
        {
            data[i]=k;
        }

    for(i=0;i<80000;i++)
        {
            if (data[i] == x)
            {
                num=i+1;
            }
        }
    if (num==-1)
    {
        printf("\n计%dぃ",x);
    }
    else
    {
        printf("\n%d琌材%d计",x,num);
    }


}

int binary(int y)   /*だ穓碝猭*/ 
{
    int top=79999,bottom=0,mid,i,k;
    int num=-1;
    int data[80000];
    for(i=0,k=1;i<80000 && k<=80000;i++,k++)
        {
            data[i]=k;
        }

    while(bottom<=top)
    {
        mid=(top+bottom)/2;
        if(data[mid] == y)
        {
            num=mid+1;
            break;
        }
        else if(data[mid]>y)
            top=mid-1;
        else
            bottom=mid+1;
    }
    if(num==-1)
        printf("\n计%dぃ",y);
    else
        printf("\n%d琌材%d计",y,num);

}

int main(int argc,char*argv[])
{
    int j;
    double r;
    printf("叫块璶穓碝计");
    scanf("%d",&j);
    clock_t start1, end1;
    start1 = clock();
    linear(j);
    end1 = clock();
    printf("\n碻穓碝猭%lf\n", (end1-start1)/(double)(CLOCKS_PER_SEC));
    clock_t start2, end2;
    start2 = clock();
    binary(j);
    end2 = clock();
    printf("\nだ穓碝猭%lf\n\n", (end2-start2)/(double)(CLOCKS_PER_SEC));
    printf("ㄢ丁畉%f\n\n", ((end1 - start1)-(end2 - start2)) / (double)CLOCKS_PER_SEC);
    system("pause");
    return 0;
}
