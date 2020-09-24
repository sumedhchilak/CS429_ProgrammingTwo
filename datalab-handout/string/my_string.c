#include "my_string.h"


size_t my_strlen (const char *str) 
{
    size_t index = 0;
    // loop through until reaching the null terminator 0
    while(str[index] != (char)0){
        index++;
    }
    return index;
}

char *my_strncpy (char *destination, const char *source, size_t num)
{
    int index = 0;
    while(index < num && source[index] != (char)0){
        // Until reaching null terminator copy over the source elem to dest
        destination[index] = source[index];
        index++;
    }
    while(index <= num){
        // if index did not reach num yet then populate with null terminator
        destination[index] = (char)0;
        index++;
    }
    return destination;
}

void *my_memmove (void *destination, const void *source, size_t num)
{
    // create temp of size num
    char temp[num];
    int index = 0;
    char *dest = destination;
    // pointer to source
    const char *src = source;
    while(index < num){
        temp[index] = src[index];
        index++;
    }
    // reset index for next iteration
    index = 0;
    while(index < num){
        // transfer to dest
        dest[index] = temp[index];
        index++;
    }
    return destination;
}
