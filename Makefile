
# Project settings
PROJECT_NAME = $(notdir $(CURDIR))
CXX = g++

# Source files
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

# Build settings
BUILD_MODE ?= DEBUG

CXXFLAGS = -Wall -Wextra -std=c++17

ifeq ($(BUILD_MODE),DEBUG)
    CXXFLAGS += -g3 -O0
else
    CXXFLAGS += -O2
endif

# raylib installation
INCLUDE_PATHS = -I/usr/local/include
LIBRARY_PATHS = -L/usr/local/lib

# raylib dependencies
LDLIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Default target
all: $(PROJECT_NAME)

# Compile and link
$(PROJECT_NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LIBRARY_PATHS) $(LDLIBS)

# Compile C++ source files
src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_PATHS) -c $< -o $@

# Clean generated files
clean:
	rm -f $(OBJ) $(PROJECT_NAME)

.PHONY: all clean

