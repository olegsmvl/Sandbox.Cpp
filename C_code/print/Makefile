# Makefile for Hello World program

# Compiler
CC = gcc

# Target executable
TARGET = hello

# Source file
SRC = hello.c

# Build target executable
$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

# Clean target executable
.PHONY: clean
clean:
	rm -f $(TARGET)
