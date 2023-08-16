#include <stdio.h>

/*
Commands to execute&run:
> clang -c mod_div.c
> ar rc libmoddiv.a mod_div.o
> ranlib libmoddiv.a
> clang static_linkage_static_lib.c -L. -lmoddiv -o static_linkage_static_lib
> ./main
*/

extern int mod (int a, int b);
extern int div (int a, int b);

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("mod(%d,%d)=%d\n", a, b, mod(a, b));
    printf("div(%d,%d)=%d\n", a, b, div(a, b));
}