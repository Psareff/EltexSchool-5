#include <stdio.h>

/*
Commands to execute&run:
> clang -fPIC -c mod_div.c
> clang -shared -o libmoddivdyn.so mod_div.o
> clang -c static_linkage_dynamic_lib.c
> clang static_linkage_dynamic_lib.c -L. -lmoddiv -o static_linkage_dynamic_lib
!!!
sudo nano /etc/ld.so.conf added working directory
sudo ldconfig called
!!!
> ./static_linkage_dynamic_lib
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