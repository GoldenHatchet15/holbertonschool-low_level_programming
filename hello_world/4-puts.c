#!/bin/bash
echo '#include <stdio.h> int main() { puts("Programming is like building a multilingual puzzle."); return 0; }' > program.c && gcc -o program program.c && ./program
