#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("Enter type of pattern (1 or 2) ");
    int r = get_int("Number of rows ");
    switch(n)
    {
    case 1:
        for(int i=1;i<=r;i++)
        {
            for(int j=i;j<=r;j++)
                printf("#");
            printf("\n");
        }
        break;
    case 2:
        for(int l=1;l<=r;l++)
        {
            for(int m=l;m<=r-1;m++)
                printf(" ");
            for(int k=1;k<=l;k++)
                printf("#");
            printf("\n");
        }
        break;
    default: printf("Wrong choice");
    }
}
