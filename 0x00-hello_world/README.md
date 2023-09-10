0x00 - Hello World project

REQUIREMENTS
============

C
=
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


Shell Scripts
=============
Allowed editors: vi, vim, emacs
All your scripts will be tested on Ubuntu 20.04 LTS
All your scripts should be exactly two lines long ($ wc -l file should print 2)
All your files should end with a new line
The first line of all your files should be exactly #!/bin/bash


0-preprocessor:
---------------
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

To run file:

 ::
 
 $ export CFILE=main.c
 $ ./0-preprocessor
 $ tail c
 

1-compiler:
-----------
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

To use file:

::

 $ export CFILE=main.c
 $ ./1.compiler
 $ cat -v main.o | head

2-assembler:
------------
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

To use the file:

::

 $ export CFILE=main.c
 $ ./2-assembler
 $ ls
 
3-name:
-------
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE

To use the file:

::

 $ export CFILE=main.c
 $ ./3-name
 $ ls


4-puts.c
--------
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0

To use the file:

::

 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
 "Programming is like a multilingual puzzle
 $ echo $?
 0

5-printf.c
----------
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

To use the file:

::

 $  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
 $ ./a.out
 with proper grammar, but the outcome is a piece of art,
 $ echo $?
 0


6-size.c
--------
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

 $ gcc 6-size.c -m32 -o size32 2> /tmp/32
 $ gcc 6-size.c -m64 -o size64 2> /tmp/64
 $ ./size32
 Size of a char: 1 byte(s)
 Size of an int: 4 byte(s)
 Size of a long int: 4 byte(s)
 Size of a long long int: 8 byte(s)
 Size of a float: 4 byte(s)
 $ ./size64
 Size of a char: 1 byte(s)
 Size of an int: 4 byte(s)
 Size of a long int: 8 byte(s)
 Size of a long long int: 8 byte(s)
 Size of a float: 4 byte(s)
 $ echo $?
 0

100-intel
---------
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

To use the file:

::

 $ export CFILE=main.c
 $ ./100-intel



101-quote
---------

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option

To use the file:

::

 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
 $ ./quote
 and that piece of art is useful" - Dora Korpar, 2015-10-19
 $ echo $?
 1
 $ ./quote 2> q
 $ cat q
 and that piece of art is useful" - Dora Korpar, 2015-10-19
 $ grep printf < 101-quote.c
 $ grep put < 101-quote.c

