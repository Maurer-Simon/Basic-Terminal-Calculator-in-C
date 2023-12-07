The Calculator was a simple starting project for me to work with multiple files. They can be compiled and linked through terminal without any errors, should also work in CLion.

First the operations.c and main.c need to be compiled into object files.
  gcc -Wall -Werror -c -o main.o main.c
  gcc -Wall -Werror -c -o operations.o operations.c

Then they can be linked together.
  gcc -o main main.o operations.o

To pass parameters in Terminal follow this structure --> ./main number1 operator number 2 (./main 25 + 2).
The * operator needs to be written within quotes ("*") as it is usually used as a pointer and therefore ends in an error.
