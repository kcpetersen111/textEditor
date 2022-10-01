all: compile
run: compile
	./kilo
compile:
	cc kilo.c -o kilo -Wall -Werror -Wextra -std=c11
