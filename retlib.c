#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef BUF_SIZE
#define BUF_SIZE 12
#endif

void bof(FILE *badfile) {
    char buffer[BUF_SIZE];
    fread(buffer, 1, 300, badfile);
}

int main(int argc, char **argv) {
    FILE *badfile;
    char dummy[BUF_SIZE*5];
    memset(dummy, 0, BUF_SIZE*5);
    badfile = fopen("badfile", "r");
    bof(badfile);
    printf("Returned Properly\n");
    fclose(badfile);
    return 0;
}