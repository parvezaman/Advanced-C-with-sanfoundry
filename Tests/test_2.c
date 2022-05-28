#include <stdio.h>
int main()
{
    float f = 0.1;
    if (f == 0.1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}

/*
 when we put any decimal number like 0.1 directly into  hte code it is treated like double. And double has 10 number of precesion and on the other hand float has 6 number of precesions.

 again the operator should have same type of data in both sides to compare. but in t his case it is getting
 flot == double (which is incorrect)

thats why the answer is "False"
 */