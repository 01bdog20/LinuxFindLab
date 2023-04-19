# LinuxFindLab
A short lab I created in C in Linux Ubuntu to instruct on how to use the internal 'find' command 

## Goal:
The goal of this lab is to familiarize students with the internal files in Ubuntu, as well as
provide students with an understanding of how to use the Linux find command and write
a C program that reads a directory and prints out the names of all the files with a
particular extension.

## Preparation:
Review documentation of the find command and how it can be used to search for files
with a specific extension. Familiarize yourself with basic C programming concepts and
file I/O operations.


## Exercise:
Use the find command to search for all files with a particular extension in a directory. For
example, to search for all files with the .txt extension in the current directory. Then, 
run the provided program and screenshot the output.

Provided program: [find.c](find.c) 

1. Use the find command to search for all files with a particular extension in a
directory. Take a screenshot of the terminal output.
__Usage: find . -name "*.txt"__

2. Download the provided C program that reads a directory and prints out the
names of all the files with a particular extension

3. Compile and run the program with an existing directory in your virtual machine.
Take a screenshot of the terminal output.
__Usage: ./find /home/student .c__
