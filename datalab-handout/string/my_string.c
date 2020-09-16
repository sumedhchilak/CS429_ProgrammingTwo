#include "my_string.h"


size_t my_strlen (const char *str) 
{
    size_t index = 0;
    while(str[index] != (char)0){
        index++;
    }
    return index;
}

char *my_strncpy (char *destination, const char *source, size_t num)
{
    //your code goes here
    return NULL;
}

void *my_memmove (void *destination, const void *source, size_t num)
{
    //your code goes here
    return NULL;
}
