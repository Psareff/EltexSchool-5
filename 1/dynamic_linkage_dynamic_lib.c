#include <stdio.h>
#include <dlfcn.h>

/*
Commands to execute&run:
> clang -fPIC -c mod_div.c
> clang -shared -o libmoddivdyn.so mod_div.o
> clang dynamic_linkage_dynamic_lib.c -o dynamic_linkage_dynamic_lib -ldl
> ./dynamic_linkage_dynamic_lib
*/


int main()
{
    int a, b;
    void* library;
    library = dlopen("./libmoddivdyn.so", RTLD_LAZY);

    int (*mod)(int a, int b);
    int (*div)(int a, int b);

    mod = dlsym(library, "mod");
    div = dlsym(library, "div");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("mod(%d,%d)=%d\n", a, b, mod(a, b));
    printf("div(%d,%d)=%d\n", a, b, div(a, b));
    dlclose(library);
}