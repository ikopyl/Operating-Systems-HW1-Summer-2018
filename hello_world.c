/**
 * CSC 415 Assignment 1
 * Completed by Ilya Kopyl (ikopyl@mail.sfsu.edu)
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define USERNAME "Ilya Kopyl"


size_t mystrlen(const char*);


int main(int argc,  char** argv)
{
    static const char* template = "CSC 415, This program written by %s!!!\n";
    const size_t buffer = mystrlen(template) - 2 + mystrlen(USERNAME);

    char* out = malloc(buffer);
    int numOfBytes = sprintf(out, template, USERNAME);

    if (!numOfBytes || numOfBytes != buffer)
        perror("sprintf error...");

    ssize_t bytesWritten = write(1, out, (size_t) numOfBytes);

    if (bytesWritten < 0 || bytesWritten != numOfBytes)
        perror("write error...");

    free(out);
    return 0;
}

/**
 * My own implementation of strlen function.
 * Using the pointer arithmetic to figure out
 * the number of elements in the array.
 * @param array of characters
 * @return characters count
 */
size_t mystrlen(const char* array)
{
    size_t counter = 0;
    char *p = (char *) array;
    while (*p != '\0')
        p++;
    counter = p - (char *) array;
    return counter;
}
