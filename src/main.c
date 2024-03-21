#include "greetings.h"
#include <stdio.h>

#include "shared.h"
#include "static.h"

int main()
{

    printf("Hello world from main!\n");
    greetings();

    printf("If I send %d to static lib --> I get %d.\n", 5, makeItDouble(5));
    printf("If I send %d to shared lib --> I get %d.\n", 5, makeItTriple(5));

    return 0;
}