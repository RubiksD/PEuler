CC = gcc
OD = objdump
LD = ld
NM = nm

SRC_PATH = ../src
PRE_COMPILATION_FLAGS = -Wall -O3 -g
POST_COMPILATION_FLAGS = -lm

P_NUM = 001

OUTPUT1 = PE001
OUTPUT2 = PE002
OUTPUT3 = PE003
OUTPUT4 = PE004
OUTPUT_GEN = PE

INCLUDE = -I ../lib/include

LIB_PATH = ../lib/src

SRC_LIB = $(LIB_PATH)/primes.c\
					$(LIB_PATH)/palindrome.c

SRC1	=	$(SRC_PATH)/PE001.c
SRC2	=	$(SRC_PATH)/PE002.c
SRC3	=	$(SRC_PATH)/PE003.c
SRC4	=	$(SRC_PATH)/PE004.c
SRC_GEN = $(SRC_PATH)/

FLAGS += $(INCLUDE) $(PRE_COMPILATION_FLAGS)

PE001:	clean
	$(CC) $(FLAGS) $(SRC1) -o $(OUTPUT1).out $(POST_COMPILATION_FLAGS)

PE002:	clean
	$(CC) $(FLAGS) $(SRC2) -o $(OUTPUT2).out $(POST_COMPILATION_FLAGS)

PE003:	clean
	$(CC) $(FLAGS) $(SRC_LIB) $(SRC3) -o $(OUTPUT3).out $(POST_COMPILATION_FLAGS)

PE004:	clean
	$(CC) $(FLAGS) $(SRC_LIB) $(SRC4) -o $(OUTPUT4).out $(POST_COMPILATION_FLAGS)

PEGEN:	clean
	$(CC) $(FLAGS) $(SRC_LIB) $(SRC_GEN)PE$(P_NUM).c -o $(OUTPUT_GEN)$(P_NUM).out $(POST_COMPILATION_FLAGS)

clean:
	rm -f *.map
	rm -f *.out
	rm -f *.asm
