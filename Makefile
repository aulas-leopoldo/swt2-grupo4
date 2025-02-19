all: 
	gcc scm.c -o scm.bin

run: all
	./scm.bin

clean:
	rm -f scm.bin