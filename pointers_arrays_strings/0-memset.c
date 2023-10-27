#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
  /* create a pointer to traverse the memory area */
    char *ptr = s;

    /* fill n bytes of memory with the constant byte b */
    for (unsigned int i = 0; i < n; i++) {
        *ptr = b;
        ptr++;
    }

    /* return the original pointer */
    return (s);
}

int main() {
    char str[10] = "Hello";
    _memset(str, 'x', 3);
    printf("%s\n", str);  /* Expected output: "xxxlo" */
    return 0;
}
