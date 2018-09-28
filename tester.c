#include <stdio.h>
#include <string.h>
#include "our_string.h"

int main()
{
    printf("\nTesting strlen:\n");
    printf("Length of \"\"\n");
    printf("\tnew: %d\n\tlib: %lu\n", our_strlen(""), strlen(""));
    printf("Length of \"oof\"\n");
    printf("\tnew: %d\n\tlib: %lu\n", our_strlen("oof"), strlen("oof"));

    return 0;
}
