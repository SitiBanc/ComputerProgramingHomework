#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    for (i=1;i<=13;i++)
    {
       if (i!=7)
       {
           printf("¡¯");
       }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=14;i<=26;i++)
    {
        if (i<=18 || i>=22)
        {
            printf("¡¯");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=27;i<=39;i++)
    {
        if (i<=30 || i>=36)
        {
            printf("¡¯");
        }
        else if (i<=32 || i>=34)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=40;i<=52;i++)
    {
        if (i<=42 || i>=50)
        {
            printf("¡¯");
        }
        else if (i<=44 || i >=48)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=53;i<=65;i++)
    {
        if (i<=54 || i>=64)
        {
            printf("¡¯");
        }
        else if (i<=56 || i>=62)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=66;i<=78;i++)
    {
        if (i>=69 && i<=75)
        {
            printf("¢I");
        }
        else if (i==66 || i==78)
        {
            printf("¡¯");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=79;i<=91;i++)
    {
        if (i>=81 && i<= 89)
        {
            printf("¢I");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=92;i<=104;i++)
    {
        if (i>=95 && i<=101)
        {
            printf("¢I");
        }
        else if (i==92 || i==104)
        {
            printf("¡¯");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=105;i<=117;i++)
    {
        if (i<=106 || i>=116)
        {
            printf("¡¯");
        }
        else if (i<=108 || i>=114)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=118;i<=130;i++)
    {
        if (i<=120 || i>=128)
        {
            printf("¡¯");
        }
        else if (i<=122 || i>=126)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=131;i<=143;i++)
    {
        if (i<=134 || i>=140)
        {
            printf("¡¯");
        }
        else if (i<=136 || i>=138)
        {
            printf("¡C");
        }
        else
        {
            printf("¢I");
        }
    }
    printf("\n");
    for (i=144;i<=156;i++)
    {
        if (i<=148 || i>=152)
        {
            printf("¡¯");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
    for (i=157;i<=169;i++)
    {
        if (i!=163)
        {
            printf("¡¯");
        }
        else
        {
            printf("¡C");
        }
    }
    printf("\n");
 system("PAUSE");
 return 0;
}
