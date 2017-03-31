#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a,b,c, bb_4ac;

    while(1){
        printf("Enter values of a,b,c for finding roots of a quadratic equation:\n");
        scanf("%lf%lf%lf",&a,&b,&c);
        
        bb_4ac = b * b - 4.0 * a * c;
        
        if(bb_4ac > 0)
            printf("There are two real roots %lf and %lf\n", 
                   (-b + sqrt(bb_4ac))/2/a,
                   (-b - sqrt(bb_4ac))/2/a);
        else if(bb_4ac < 0)
            printf("There are two imaginary roots %lf + i%lf and %lf - i%lf\n", -b/2/a, sqrt(-bb_4ac)/2/a, -b/2/a, sqrt(-bb_4ac)/2/a);
        else
            printf("The single root is %lf\n", -b/2/a);
    
        printf("\n");
    }
  
    system("PAUSE");	
    return 0;
}

