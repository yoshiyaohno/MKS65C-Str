#include <stdio.h>
#include <string.h>
#include "our_string.h"

int main()
{
    /* strlen testing */
    printf("\nTesting strlen:\nLength of \"\"\n");
    printf("\tus: %d\n\tlib: %lu\n", our_strlen(""), strlen(""));
    printf("Length of \"oof\"\n");
    printf("\tus: %d\n\tlib: %lu\n", our_strlen("oof"), strlen("oof"));

    /* strncpy testing */
    printf("\nTesting strncpy:\nCopy \"\" into \"\"\n");
    printf("\tus: \n\tlib: \n", our_strncpy("","",5), strcpy("","",5));
    printf("Copy \"cat\" into \"\"\n");
    printf("\tus: \n\tlib: \n", our_strncpy("cat","",5), strcpy("cat","",5));
    printf("Copy \"cat\" into \"dog\"\n");
    printf("\tus: \n\tlib: \n", our_strncpy("cat","dog",5), strcpy("cat","dog",5));

    /* strcat testing */

    /* strcmp testing */
    printf("\nTesting strncpy:\nCopy \"\" into \"\"\n");
    printf("\tus: \n\tlib: \n", our_strncpy("","",5), strlen("","",5));

    /* strchr testing */
    printf("\nTesting strncpy:\nCopy \"\" into \"\"\n");
    printf("\tus: \n\tlib: \n", our_strncpy("","",5), strlen("","",5));

    /* strstr() testing */
    // general test
    printf("\nTesting strstr:\nstrstr stroofing oof:\n");
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("stroofing", "oof"),
            strstr("stroofing", "oof") );
    // test word at beginning, multiple occurences
    printf("strstr thinkthin thin:\n");
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("thinkthin", "thin"),
            strstr("thinkthin", "thin") );
    // test word at end
    printf("strstr suet-baguette uette:\n");
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("suet-baguette", "uette"),
            strstr("suet-baguette", "uette") );
    printf("strstr oofouchow howie:\n");
    // test no word, hitting end of haystack
    printf("\tus: %p\n\tlib: %p\n",
            our_strstr("oofouchow", "howie"),
            strstr("oofouchow", "howie") );

    return 0;
}
