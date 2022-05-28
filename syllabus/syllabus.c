#include <stdio.h>
#include <string.h>
int main()
{
    char *syllabus[] = {"The C Language", "C Program Compilation", "Execution precess", "tokens of c program", "c instructions", "constants, variables", "indentifiers and keywords", "primitive data types", "structures - the definition", "structures - declaration and types", "accessing elements of structure", "range of signed and unsigned data types", "efficient way of printing pointer", "compiler memory allocation for data types", "compiler memory allocation for structure", "data type alignments", "compiler memory allocation for unions", "union- data corruption", "practical usesge of unions", "practical usage of bitfields", "bitfields overflow", "printing every byte of an integer", "enumeration", "typedef statements", "practical example of typedef usage", "typedefing a function pointer", "bit-fields in structure", "practical examples of bitfield usage", "structure padding and pitfalls", "programming model and memory sizing"};

    // int length = strlen(*syllabus);
    int length = sizeof(syllabus) / sizeof(syllabus[0]);

    // printf("%d", length);

    for (int i = 0; i < length; i++)
    {
        printf("\u2042 %s\n", syllabus[i]);
    }

    return 0;
}