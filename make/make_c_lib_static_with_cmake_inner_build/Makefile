# Compiler and flags
CXX = g++                       # Specify the C++ compiler
CXXFLAGS = -Wall -Wextra -std=c++11  # Flags for warnings and C++11 standard

# Project configuration
TARGET = MyCppExecutable        # The name of the final executable
MAIN_SRC = main.cpp             # The main source file
OBJS = $(MAIN_SRC:.cpp=.o)      # Object files generated from source files

# Library configuration
BUILD_DIR = mylib_prj/build     # Directory where the static library is located
LIB_NAME = libmylib.a           # The name of the static library file
LDFLAGS = -L$(BUILD_DIR) -l:libmylib.a # Linker flags to use the library

# Rule to build the final executable
# $(TARGET) depends on $(OBJS) (object files)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS) # Link object files with the library

# Rule to build object files from source files
# %.o depends on %.cpp (same name, different extensions)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ # Compile source files to object files
	# $< is the first dependency (source file)
	# $@ is the target file (object file)

# Clean up the build artifacts
clean:
	rm -f $(OBJS) $(TARGET)       # Remove all object files and the executable

