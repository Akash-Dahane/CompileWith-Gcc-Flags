# CompileWith-Gcc-Flags


As a Linux user, I use Linux terminal strictly for programming purpose.
While solving problems in Competitive Programming, I use C++/C as programming language
which I write using Vim editor in Linux terminal.
Now after completing the program code, I usually compile it using gcc/g++.


Example 1: gcc myProgram.c


Example 2: g++ myProgram.cpp


And that does the job.


But we often do silly mistakes in our code like forgetting to take input,
setting array bounds, messing with return statements in recursive functions, etc.
And these silly mistakes are tough to catch at least when you are in time bound contest.
Many of these silly mistakes can be avoided if we use correct gcc flags during program compilation.


Example: g++ -Wall -Wextra -O2 myProgram.cpp


But don't you think that's tiresome to both remember and write these flags during compilation?

One solution is to use Makefile, but that's too advanced and over my head.
I needed simple fix to do that job for me. So using some OS course knowledge, I wrote this simple c program involving system calls.


How to use?



First compile the program with naming output file as compile.


Example: gcc -o compile compiler.c 


Note: Naming compile is optional, you can use another.

Move the executable file(compile) at location /usr/local/bin


Example: sudo cp /path/to/the/folder/of/compile/file  /usr/local/bin


This is to make it accessible from anywhere in the terminal just like gcc/g++ .
Now compile your program with simple syntax below. 


Example: compile myProgram.cpp


Note: 

Also, if you want to add or remove flags, check comments in program code and modify necessary parts and then recompile and overwrite the file you saved in /urs/bin/bash .
Link which helped me write correct code: https://stackoverflow.com/questions/65446902/execv-system-call-not-running-as-desired/65454426#65454426
