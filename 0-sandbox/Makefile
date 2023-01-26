########################################################################
####################### Makefile Template ##############################
########################################################################

all:
	gcc -std=c11 -Werror src/hello.c -o hello
run:
	./hello a b c
clean: 
	rm hello
test:
	python tests/sanitycheck.py 
mr: 
	make all && make run
	