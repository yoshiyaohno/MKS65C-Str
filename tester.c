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
    char a[10] = "";
    char b[10] = " ";
    char c[10] = "";
    char d[10] = " ";
    char e[10] = " ";
    char f[10] = "";
    char g[10] = " ";
    char h[10] = "";
    char i[10] = "dog";
    char j[10] = "cat";
    char k[10] = "dog";
    char l[10] = "cat";
    printf("\nTesting strncpy:\nCopy \" \" into \"\"\n");
    printf("\tus:\"%s\" \n\tlib:\"%s\" \n", our_strncpy(a,b,1), strncpy(c,d,1));
    printf("Copy \"\" into \" \"\n");
    printf("\tus:\"%s\" \n\tlib:\"%s\" \n", our_strncpy(e,f,3), strncpy(g,h,1));
    printf("Copy \"cat\" into \"dog\"\n");
    printf("\tus:%s \n\tlib:%s \n", our_strncpy(i,j,3), strncpy(k,l,3));

    /* strcat testing */
    char z[8] = "cat";
    char y[] = "dog";

    // printf("\nTesting strcat:\nAppend \"dog\" to \"cat\"\n");
    // printf("\tus:%s \n\tlib:%s \n", our_strcat(z,y), strcat(z,y));

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
