GCC := gcc

ROOT_PATH := .
SRC_DIR := $(ROOT_PATH)/src

C_FLAG := -g -Wall -march=native -msse4.2 --coverage
INC := -I$(ROOT_PATH)/include
AC_C := $(wildcard $(SRC_DIR)/ac/*.c)
DFC_C := $(wildcard $(SRC_DIR)/dfc/*.c)

OBJ := $(patsubst %.c, %.o, $(AC_C) $(DFC_C))


%.o : %.c
	$(GCC) $(INC) $(C_FLAG) -c $< -o $@


.INTERMEDIATE: $(OBJ)

all: test

test: $(SRC_DIR)/main/test.o $(OBJ)
	$(GCC) $(INC) $(C_FLAG) $^ -o $@

clean:
	rm -rf $(SRC_DIR)/ac/*.gcda
	rm -rf $(SRC_DIR)/ac/*.gcno
	rm -rf $(SRC_DIR)/dfc/*.gcda
	rm -rf $(SRC_DIR)/dfc/*.gcno
	rm -rf $(SRC_DIR)/main/*.gcda
	rm -rf $(SRC_DIR)/main/*.gcno
	rm -rf test
