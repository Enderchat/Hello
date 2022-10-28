CC= gcc
FLAGS=	-Wall -Werror -Wextra
all: main run

main:	
	@${CC} ${FLAGS} main.c func.c -o main
clean:	
	@rm -rf *.out main
run:	
	@./main
rebuild: clean main