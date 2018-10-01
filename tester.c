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
    char c[10] = " ";
    char d[10] = "";
    char e[10] = "dog";
    char f[10] = "cat";
    printf("\nTesting strncpy:\nCopy \" \" into \"\"\n");
    printf("\tus:\"%s\" \n\tlib:\"%s\" \n", our_strncpy(a,b,1), strncpy(a,b,1));
    printf("Copy \"\" into \" \"\n");
    printf("\tus:\"%s\" \n\tlib:\"%s\" \n", our_strncpy(c,d,3), strncpy(c,d,1));
    printf("Copy \"cat\" into \"dog\"\n");
    printf("\tus:%s \n\tlib:%s \n", our_strncpy(e,f,3), strncpy(e,f,3));

    // DEPRECIATED ////////////////////////////////////////////
    // /* strcat testing */
    // /* Repeats appending the second word for unknown reason (have to increase dest
    //     size by 3 to avoid Abort trap: 6 error)*/
    // char z[4] = "cat";
    // char y[] = "";
    // char x[7] = "";
    // char w[] = "cat";
    // char v[10] = "cat";
    // char u[] = "dog";

    // printf("\nTesting strcat:\nAppend \"\" to \"cat\"\n");
    // printf("\tus:%s \n\tlib:%s \n", our_strcat(z,y), strcat(z,y));
    // printf("\nTesting strcat:\nAppend \"cat\" to \"\"\n");
    // printf("\tus:%s \n\tlib:%s \n", our_strcat(x,w), strcat(x,w));
    // printf("\nTesting strcat:\nAppend \"dog\" to \"cat\"\n");
    // printf("\tus:%s \n\tlib:%s \n", our_strcat(v,u), strcat(v,u));
    // DEPRECIATED /////////////////////////////////////

    /* fixed strcat testing */
    // original testing involved variables such that the same string
    // was concatenated twice 
    char oof0[20] = "oofouch";
    char oof1[20] = "oofouch";
    printf("\nTesting strcat:\nAppend \"\" to \"oofouch\"\n");
    printf("\tus:%s \n\tlib:%s \n", our_strcat(oof0,""), strcat(oof1,""));
    printf("Append \"oof\" to \"oofouch\"\n\tus:%s \n\tlib:%s \n",
            our_strcat(oof0,"oof"), strcat(oof1,"oof"));
    printf("Now append \"owie\"\n\tus:%s \n\tlib:%s \n",
            our_strcat(oof0,"owie"), strcat(oof1,"owie"));

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
