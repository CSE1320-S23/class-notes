########################################################################
####################### Makefile Template ##############################
########################################################################

all:
	gcc -std=c11 -Wall src/hello.c -o hello
run:
	./hello
clean: 
	rm hello
test:
	python tests/sanitycheck.py 
mr: 
	make all
	make run
	