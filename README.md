# OS-Project-1

RUNNING
1. In the directory of the makefile, run the command make to build the project.
2. In the same directory, run the command ./run_test.exe to run the project.

The script will run all test functions and dispaly which
functions ran successfully and which ones didnt.

PIECES
1. list.h file that has all the prototypes and descriptions of all functions.
2. list.c file that contains all the implementations of the functions in list.h
3. list_test.c file that tests all the functions.
4. makefile that compiles the project.

PROBLEMS
1. Had some trouble with freeing memory. Realized that pointers can only be
freed if allocated with malloc otherwise will cause seg fault.

RESOURCES
1. stackoverflow.com - for debugging
2. http://www.cplusplus.com - understanding how functions work

