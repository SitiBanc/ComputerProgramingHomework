#include<stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    float n,a,b,x;
    int i;
    printf("�п�JN���ȥH�D�䥭���:");
    scanf("%f",&n);
    a=0;
    b=n;
    for(i=0;i<100;i++){
        x=(a+b)/2;
        if((x*x)>n){
            b=x;
        }else if((x*x)<n){
            a=x;
        }
    }
        printf("N������ڬO�G%.0f",x);
        system("pause");
        return 0;
}
