# Compiler to use 
CC = g++

# Target executable name
TARGET = main

# Source files
SRCS = cmake_practice.cpp function.cpp

# Object files to be made
OBJS = $(SRCS:.cpp=.o)

# Default rule to build the target 
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

# How to create the object files
%.o: %.cpp
	$(CC) -c $< -o $@ 

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
