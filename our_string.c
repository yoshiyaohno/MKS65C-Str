#include <stdio.h>
#include "our_string.h"


/* Yoshi */
int our_strlen( char * s)
{
    int len = 0;
    while( *s++)
        ++len;
    return len;
}

// char * our_strcpy( char *dest, char *source ) { } 

/* Mandy */
char * our_strncpy( char *dest, char *source, int n)
{
    // code here
    return (char*) 0;
}


/* Yoshi */
char * our_strcat( char *dest, char *source )
{
    // code here
    return (char*) 0;
}

// char * our_strncat( char *dest, char *source, int n);

/* Mandy */
int our_strcmp( char *s1, char *s2 )
{
    // code here
    return 0;
}

/* Mandy */
char * our_strchr( char *s, char c )
{
    // code here
    return (char*) 0;
}

/* Yoshi (bonus) */
char * our_strstr( char *haystack, char * needle )
{
    char *nscan, *hscan;
    while( *haystack ) {
        // printf("h:%c n:%c\n", *haystack, *needle);
        if( *haystack == *needle ) {
            nscan = needle;
            hscan = haystack;
            while( *hscan++ == *nscan++ ) {
                // printf("%c", *hscan);
                if( !*nscan ) return haystack;
                if( !*hscan ) break;
            }
        }
        ++haystack;
    }
    return (char*) 0;

}







