########################################################################
#                                                                      #
# @author: Rezvee                                                      #
# @date: 09/24/2024                                                    #
#                                                                      #
# @description: Simple makefile script testing.                        #
#                                                                      #
########################################################################

# Default shell. If you are not using `bash` please change
# it to the appropriate shell of your system e.g. ksh, zsh, etc...
SHELL=/bin/bash

# Fancy Rules
# C related items
CC = gcc
CFLAGS = -Og -Wall
# C++ related items
CXX = g++
CXXFLAGS =
# Pre-processor flags
CPPFLAGS =
# LDFLAGS
LDFLAGS =

# TARGET DIRECTORIES
src="src"
headers=
objects=${src}/.objects
compiled="${}/main.o"

# FUNCTIONS CALLS
src_files=$(ls ${src})
all_srcs=$(patsubst %.c, %.o, $(ls -la $(src)))

# PHONY TARGETS: Put file names here so we don't confuse
# targets and recipies. (you can replace `all` with
# more explicit something
.PHONY: all

d :
	@echo ${src_files}
	@(ls ${src})

clean :

%.o : %.c
	@echo "Building source files."
	@$(CC) -c $(CFLAGS) ${src}/$<.c -o $@

# Automatic varaibles
test : t1 t2
	@echo "Printing the target name"
	@echo $@
	@echo "Outputs all pre-requisites newer than the target"
	@echo $?
	@echo "Outputs all pre-requsites"
	@echo $^
	@echo "Outputs the first pre-requisite"
	@echo $<

test1: test
	@echo "Printing the target name"
	@echo $@
	@echo "Outputs all pre-requisites newer than the target"
	@echo $?
	@echo "Outputs all pre-requsites"
	@echo $^
	@echo "Outputs the first pre-requisite"
	@echo $<

t1:

t2: