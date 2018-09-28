#include <stdio.h>
#include <string.h>
#include "our_string.h"

int main()
{
    printf("\nTesting strlen:\nLength of \"\"\n");
    printf("\tus: %d\n\tlib: %lu\n", our_strlen(""), strlen(""));
    printf("Length of \"oof\"\n");
    printf("\tus: %d\n\tlib: %lu\n", our_strlen("oof"), strlen("oof"));

    printf("\nTesting strstr:\nstrstr stroofing oof:\n");
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("stroofing", "oof"),
            strstr("stroofing", "oof") );
    printf("strstr oofouchow howie:\n");
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("oofouchow", "howie"),
            strstr("oofouchow", "howie") );

    return 0;
}
