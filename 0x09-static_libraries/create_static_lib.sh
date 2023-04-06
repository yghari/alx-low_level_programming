#!/bin/bash

# Create a list of all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
gcc -c *.c

# Create the static library by archiving all the object files
ar rcs liball.a *.o

# Clean up by removing all the object files
rm *.o