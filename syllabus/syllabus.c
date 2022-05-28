#include <stdio.h>
#include <string.h>
int main()
{
    char *syllabus[] = {"The C Language", "C Program Compilation", "Execution precess", "tokens of c program", "c instructions", "constants, variables", "indentifiers and keywords", "primitive data types", "structures - the definition", "structures - declaration and types", "accessing elements of structure", "range of signed and unsigned data types", "efficient way of printing pointer", "compiler memory allocation for data types", "compiler memory allocation for structure", "data type alignments", "compiler memory allocation for unions", "union- data corruption", "practical usesge of unions", "practical usage of bitfields", "bitfields overflow", "printing every byte of an integer", "enumeration", "typedef statements", "practical example of typedef usage", "typedefing a function pointer", "bit-fields in structure", "practical examples of bitfield usage", "structure padding and pitfalls", "programming model and memory sizing", "why sizeof int and long is 4 or 8", "use of long long in 32 bit architecture", "practical example of long long", "IA-32, IA-64,ILP-32,LP-64,x-86-64", "Array-representation", "Array- memory allocation", "array-declaration and initialization", "two dimensional array", "pointers", "accessing a variable with pointer", "pointer-memory allocation", "pointer-declaration and initialization", " pointer-  dereferencing", "pointers and arrays", "character arrays using pointers", "aray of charecter pointers", "memory diagram- array of char pointers", "arrays as pointers - a[i] == i[a]?", "constant pointers", "pointers arithmatics", "string handling functions", "string conversion functions", "efficient usage of sscanf()/sprintf()", "computing basic", "binary and octal systems", "decimal and haxadecimal systems", "signed representations in the memory", "binary shifts-right and left", "sign bits and bit-shift operations", "right shift-logical vs arithmatic", "bit shift overflow", "ASCII representaions", "Endian-ness - little vs big", "Endian-ness protability issues", "operators", "bitwise operations", "Logical operators - short circuit", "bitwise vs logical operations", "sizeof() operator", "pitfall / issurs with sizeof() usage", "pointer increment and scaling", "operator precedence", "operator associativity", "true meaning of associativity", "example of precedence and associativity", "ternary oprtator associativity rule", "data type conversion rule", "float to int to float conversions", "variadic functions and default promotion rules", "printf idiosnchracies", "pointer format specifiers", "signed vs unsigned pitfalls", "Evaluation of i = ++i + ++i", "Evaluation of i = ++i + ++i+ ++i", "concept of sequence points", "example of sequence points", "storage classes", "storage class specifiers", "scope of a variable", "register, auto, static,extern", "and many more"};

    // int length = strlen(*syllabus);
    int length = sizeof(syllabus) / sizeof(syllabus[0]);

    printf("\nlength = %d\n\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("\u2042 %s\n", syllabus[i]);
    }

    return 0;
}