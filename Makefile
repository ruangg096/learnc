SRC_DIR = 0

SRC = $(wildcard src/data_struct/*.cpp)
temp = $(notdir $(SRC))
obj = $(patsubst $(SRC_DIR)/%.c,%.o,$(temp)) 
#Obj = $(patsubst $(SRC_DIR)/%.cpp,%.o,$(SRC))  



Main : $(object)
	g++ -o  Main $(object) -g

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