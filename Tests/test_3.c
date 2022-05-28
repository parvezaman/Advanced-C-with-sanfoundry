#include <stdio.h>
int main()
{
    int a, b = 1, c = 1;
    a = sizeof(c = ++b + 1);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

/*
Look!
sizeof() is a function. it just comes on the stack, take values and after calculation it only returns the output. it doesnt store anything in the hip (memory that preserves the calculated results). so just after being out of the function the value of b and c are remaining the same.

and the return is an integer so the sizeof(int) of course 4.
but the a and b are remaining the same as well 1 and 1
 */