#include <stdio.h>
int main()
{
    char *p = 0;
    *p = 'A';
    printf("p = %c\n", *p);
    return 0;
}
// segmentation fault (core dumped)

/*
By *p = 0 is as defining a location with null address. And then by *p = 'A' is assigning 'A' into that null adress. which is logically incorrect. because how can you put something into a adress which is not avaialable.
thats why it is giving segmentation faulat. beacause you are trying to access a momory location where you dont have any access.
 */