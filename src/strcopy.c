
#include <stdio.h>
#include"../include/strcopy.h"
char* sgs_clib_strcpy(char* dest, const char* src)
{
    if (dest == NULL) {
        return NULL;
    }
    char *pt = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return pt;
}
