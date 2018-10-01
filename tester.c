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
    

    /* strcat testing */


    /* strcmp testing */
    printf("\nTesting strcmp:\nCompare \"\" with \"\"\n ");
    printf("\tus:%d \n\tlib:%d \n", our_strcmp("",""), strcmp("",""));
    printf("Compare \"hello\" with \"hello\"\n ");
    printf("\tus:%d \n\tlib:%d \n", our_strcmp("hello","hello"), strcmp("hello","hello"));
    printf("Compare \"hello\" with \"hi\"\n ");
    printf("\tus:%d \n\tlib:%d \n", our_strcmp("hello","hi"), strcmp("hello","hi"));
    printf("Compare \"hi\" with \"hello\"\n ");
    printf("\tus:%d \n\tlib:%d \n", our_strcmp("hi","hello"), strcmp("hi","hello"));

    /* strchr testing */
    printf("\nTesting strchr:\nFind \' \' in \"\"\n");
    printf("\tus:%p \n\tlib:%p \n", our_strchr("",' '), strchr("",' '));
    printf("Find \'b\' in \"cat\"\n");
    printf("\tus:%p \n\tlib:%p \n", our_strchr("cat",'b'), strchr("cat",'b'));
    printf("Find \'a\' in \"cat\"\n");
    printf("\tus:%p \n\tlib:%p \n", our_strchr("cat",'a'), strchr("cat",'a'));

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
