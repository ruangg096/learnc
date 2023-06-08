SRC_DIR_1 = src/data_struct
SRC_DIR_2 = src/animal_class

BUILD_DIR = build
SRC_DIR = src

SRC_FILE_1 = $(wildcard $(SRC_DIR_1)/*.cpp)
SRC_FILE_2 = $(wildcard $(SRC_DIR_2)/*.cpp)

SRC_FILE = $(SRC_FILE_1) $(SRC_FILE_2)
SRC_FILE_name = $(notdir $(SRC_FILE))

OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILE_name))

CC = g++

all : small_project

small_project : $(OBJ_FILES)
	CC -o $^ $@  -g

BUILD_DIR/%.o : %.o
	cc -c $ 

Main.o : Main.cpp
	g++ -c Main.cpp -g

animal.o : animal.cpp animal.h
	g++ -c animal.cpp  -g

cat.o : cat.h cat.cpp
	g++ -c cat.cpp -g

dog.o : dog.cpp dog.h
	g++ -c dog.cpp -g


Lnode1.o : Lnode.h Lnode1.cpp 
	g++ -c Lnode1.cpp -g

Lnode2.o :Lnode.h Lnode2.cpp
	g++ -c Lnode2.cpp -g


.PHONY : clean
clean :
	-rm Main $(object)
	rm -rf build/*