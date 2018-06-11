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

    if (!numOfBytes || numOfBytes != buffer) { perror("sprintf error"); }


    free(out);
    return 0;
}

/**
 * My own implementation of strlen function
 * @param array of characters
 * @return characters count
 */
size_t mystrlen(const char* array)
{
    unsigned int counter = 0;
    char *p = (char *) array;
    while (*p != '\0') {
        counter++;
        p++;
    }
    return counter;
}
