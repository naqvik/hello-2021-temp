# Makefile for hello, git demo
CC = g++

CCFLAGS = -Wextra -Wall -Wfloat-equal -Wconversion -Wparentheses	\
-pedantic -Wunused-parameter -Wunused-variable -Wreturn-type		\
-Wunused-function -Wredundant-decls -Wreturn-type -Wunused-value	\
-Wswitch-default -Wuninitialized -Winit-self

CCFLAGS += -Werror

hello : hello.cpp
	$(CC) $(CCFLAGS) -o $@ $<

.PHONY : clean
clean :
	rm -f hello
