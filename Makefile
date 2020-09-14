all: main.o dll_functions.o
	gcc main.o dll_functions.o -o run_exam

main.o: main.c double_linked_list.h
	gcc -c main.c

dll_functions.o: dll_functions.c double_linked_list.h
	gcc -c dll_functions.c

clean:
	rm *.o
	rm run_exam
