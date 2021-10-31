#include <stdio.h>
#include"../include/strcopy.h"
int main(void)
{
    char source[]="Text to be copied";
    char destination[25];
 
    printf("%s\n", sgs_clib_strcpy(destination, source));
    printf("Source Text:- %s\n",source);
    printf("Destination Text:- %s\n",destination);
 
    return 0;
}