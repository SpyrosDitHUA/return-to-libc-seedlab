#include <stdio.h>
#include <stdlib.h>

int main() {
    char* shell = getenv("MYSHELL");
    if (shell)
        printf("%p\n", shell);
    return 0;
}