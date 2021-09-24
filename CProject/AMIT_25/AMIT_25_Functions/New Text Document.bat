

call gcc -c Arthimatcs.c -o Arthimatcs.o
call gcc -c main.c -o main.o
call gcc -c Bitwise.c -o Bitwise.o 
call gcc -o Execute.exe Arthimatcs.o main.o Bitwise.o
call Execute.exe