#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(int argc, char *argv[])
{
    double a,b,c, bb_4ac;

    while(1){
        printf("½Ð¿é¤Ja,b,c\n");
        scanf("%lf%lf%lf",&a,&b,&c);
        bb_4ac = b * b - 4.0 * a * c;
        if(bb_4ac > 0)
            printf("There are two real roots %.0f and %.0f\n", 
                   (-b + sqrt(bb_4ac))/2/a,
                   (-b - sqrt(bb_4ac))/2/a);
        else if(bb_4ac < 0)
            printf("There are two imaginary roots %.0f + %.0f i and %.0f - %.0f i\n", -b/2/a, sqrt(-bb_4ac)/2/a, -b/2/a, sqrt(-bb_4ac)/2/a);
        else
            printf("The single root is %.0f\n", -b/2/a);
    
        printf("\n");
    }
  
    system("PAUSE");	
    return 0;
}

