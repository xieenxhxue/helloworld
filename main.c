#include <stdio.h>
#include <stdlib.h>
#include "hello/hello.h"
#include "world/world.h"
int main()
{
    //printf("Hello , world!\n");
    hello();
    world();
    printf("Compile：fedora 41 gcc g++\n");
    return 0;
}
