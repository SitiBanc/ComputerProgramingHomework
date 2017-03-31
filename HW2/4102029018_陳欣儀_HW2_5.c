#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear(int x)   /*�`�Ƿj�M�k*/
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
        printf("\n�Ʀr%d���s�b",x);
    }
    else
    {
        printf("\n%d�O��%d�ӼƦr",x,num);
    }


}

int binary(int y)   /*�G���j�M�k*/ 
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
        printf("\n�Ʀr%d���s�b",y);
    else
        printf("\n%d�O��%d�ӼƦr",y,num);

}

int main(int argc,char*argv[])
{
    int j;
    double r;
    printf("�п�J�n�j�M���Ʀr�G");
    scanf("%d",&j);
    clock_t start1, end1;
    start1 = clock();
    linear(j);
    end1 = clock();
    printf("\n�`�Ƿj�M�k�ӮɡG%lf\n", (end1-start1)/(double)(CLOCKS_PER_SEC));
    clock_t start2, end2;
    start2 = clock();
    binary(j);
    end2 = clock();
    printf("\n�G���j�M�k�ӮɡG%lf\n\n", (end2-start2)/(double)(CLOCKS_PER_SEC));
    printf("��̮ɶ��t���G%f\n\n", ((end1 - start1)-(end2 - start2)) / (double)CLOCKS_PER_SEC);
    system("pause");
    return 0;
}
