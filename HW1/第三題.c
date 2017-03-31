#include <stdlib.h>
#include <stdio.h>

int main(){
    int count, i, j, sum;
	sum=0;
	count=0;
    for(i=2; i <= 550; i++)
        {
		j = i - 1;
        while(j > 1)
            {
            if(i % j == 0)
                {
                    break;
                }
            j--;
            }
        if(j==1)
        {
            printf("%d\t", i);
            sum+=i;
            count++;
        }
        if(count==100)
            {
            break;
            }
        }
    printf("Á`©M¬°¡G%d\n",sum);
	system("PAUSE");
    return 0;
}
