#include <stdio.h>

int main(int argc, char *argv[]) {
  (void)argc; /* Explicitly state that argc is unused */
    if (argv[0]) {
        printf("%s\n", argv[0]);
    }
    return (0);
}

