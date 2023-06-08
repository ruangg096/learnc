SRC_DIR_1 = src/data_struct
SRC_DIR_2 = src/animal_class
SRC_DIR_3 = src

target = small_project

BUILD_DIR = build
SRC_DIR = src

SRC_FILE_1 = $(wildcard $(SRC_DIR_1)/*.cpp)
SRC_FILE_2 = $(wildcard $(SRC_DIR_2)/*.cpp)
SRC_FILE_3 = $(wildcard $(SRC_DIR_3)/*.cpp)

SRC_FILE = $(SRC_FILE_1) $(SRC_FILE_2) $(SRC_FILE_3)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILE))

file_dirs = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%,$(SRC_FILE))


all : 
	$(foreach file_dir,$(file_dirs),mkdir -p $(file_dir);)

build : $(target)

$(target) : $(OBJ_FILES)
	g++  $^ -o $@


$(BUILD_DIR)/%.o : $(SRC_DIR)/%.cpp
	g++ -c $^ -o $@ -g


.PHONY : clean
clean :
	-rm -rf $(OBJ_FILES) $(target)
	rm -rf build/*