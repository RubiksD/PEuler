CC = gcc
OD = objdump
LD = ld
NM = nm

SRC_PATH = ../src
PRE_COMPILATION_FLAGS = -Wall -O3 -g
POST_COMPILATION_FLAGS = -lm
OUTPUT1 = PE001
INCLUDE = -I ../lib/include

SRC1	=	$(SRC_PATH)/PE001.c
FLAGS += $(INCLUDE) $(PRE_COMPILATION_FLAGS)

PE001:	clean
	$(CC) $(FLAGS) $(SRC1) -o $(OUTPUT1).out $(POST_COMPILATION_FLAGS)

clean:
	rm -f *.map
	rm -f *.out
	rm -f *.asm
