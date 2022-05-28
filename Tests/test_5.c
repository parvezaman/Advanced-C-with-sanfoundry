#include <stdio.h>
int main()
{
    int a = 1, b = 3, c = 2;
    if (a > b)

        if (b > c)

            printf("a>b and b>c\n");

        else

            printf("something else");

    return 0;
}

/*
the else statement is adjusted with second if (b>c) not the first one. thats why it prints nothing
 */