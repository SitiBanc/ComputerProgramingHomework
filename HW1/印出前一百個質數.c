#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,count,flag ;
    count=1;
    flag=0;
    while (count<=100)
    {
        for (i=2;i<j;i++)
        {
            if (j%i==0)
                 flag=1;
             if (flag=0)
                {
                printf("%d\t ",j);
                count++;
                }
        }

        j++;
    }
    system("PAUSE");
    return 0;
}
