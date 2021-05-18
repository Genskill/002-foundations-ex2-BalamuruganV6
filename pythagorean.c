#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float a = get_float("side 1 ");
    float b = get_float("side 2 ");
    float c = get_float("side 3 ");
    float big,s1,s2;
    if(a<b)
    {
        s1 = a;
        if(c<b)
        {
             s2 = c;
             big = b;
        }
        else
        {
            s2 = b;
            big = c;
        }
    }
    else if(a<c)
    {
        s1 = a;
        s2 = b;
        big = c;
    }
    else
    {
        s1 = b;
        s2 = c;
        big = a;
    }
    if(big*big==(s1*s1)+(s2*s2))
        printf("Yes");
    else
        printf("No");

}
