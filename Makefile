

hello: main.o hello.o traduction.o langues.h 
	gcc -o $@ main.o hello.o traduction.o

main.o : main.c hello.h langues.h
	gcc -c $<

hello.o: hello.c langues.h traduction.h hello.h
	gcc -c $<

traduction.o: traduction.c traduction.h langues.h
	gcc -c $<
