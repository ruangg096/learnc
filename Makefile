SRC_DIR_1 = src/data_struct
SRC_DIR_2 = src/animal_class
SRC_DIR_3 = src
SRC_DIR_4 = src/

target = small_project

BUILD_DIR = build
SRC_DIR = src

SUBDIRS := $(shell find $(SRC_DIR) -type d)

SRC_FILE := $(foreach dir,$(SUBDIRS),$(wildcard $(dir)/*.cpp))

OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILE))

file_dirs = $(patsubst $(SRC_DIR)%,$(BUILD_DIR)%,$(SUBDIRS))

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