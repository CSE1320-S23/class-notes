########################################################################
####################### Makefile Template ##############################
########################################################################

all:
	gcc -std=c11 -Wall src/spongebob.c -o spongebob
run:
	./spongebob "C Programming is the best!"
clean: 
	rm hello
test:
	python tests/sanitycheck.py 
mr: 
	make all
	make run
	