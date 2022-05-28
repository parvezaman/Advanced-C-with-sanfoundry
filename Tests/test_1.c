#include <stdio.h>
int main()
{
    if (sizeof(int) > -1)
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
well, in case of binary operators(operators which take two operands to compare or operate ec: >, < etc) you need both sides to be the same type.

we know there are different types of int as: int, unsigned int, unsigned long etc.

Generally sizeof() function takes unsigned int.
but in this case this operation is having something like:
unsigned(int) > signed(-1)

so it is becoming filthy logic and it is returning "False"

PS. Read about various conversion rules in C programmig
 */