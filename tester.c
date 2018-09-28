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

    /* strcat() testing */
    char oof1[30] = "oofouch";
    char oof2[30] = "oofouch";
    printf("\nTesting strcat:\nstrcat oofouch owie:\n");
    printf("\tus: %s\n\tlib: %s\n",
            our_strcat(oof1, "owie"),
            strcat(oof2, "owie") );

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
