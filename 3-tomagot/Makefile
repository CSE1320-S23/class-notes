########################################################################
####################### Makefile Template ##############################
########################################################################

all:
	gcc -std=c11 -Wall src/tomagot.c -o tomagot
run:
	./tomagot henry 2.1 0.32
clean: 
	rm tomagot
test:
	python tests/sanitycheck.py 
mr: 
	make all
	make run
	