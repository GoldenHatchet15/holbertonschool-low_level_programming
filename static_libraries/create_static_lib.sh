#!/bin/bash

# Exit immediately if a command exits with a non-zero status.
set -e

# Delete old object files and static library if they exist.
rm -f *.o liball.a

# Compile all .c files in the current directory into object files (.o).
gcc -c *.c

# Create a static library 'liball.a' from all .o files.
ar rcs liball.a *.o
