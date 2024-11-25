default: program
program: main.c vector.o cool_math.o
	gcc -o program $^
#vector.o: vector.c
#	gcc -o vector.o -c vector.c
#cool_math.o: cool_math.c
#	gcc -o cool_math.o -c cool_math.c
%.o: %.c
	gcc -o $@ -c $<

clean:
	rm program *.o
