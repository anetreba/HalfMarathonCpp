# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Users/anetreba/.brew/Cellar/cmake/3.17.3/bin/cmake

# The command to remove a file.
RM = /Users/anetreba/.brew/Cellar/cmake/3.17.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anetreba/Desktop/MarathonCpp/Race00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anetreba/Desktop/MarathonCpp/Race00/build

# Include any dependencies generated for this target.
include app/CMakeFiles/snake.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/snake.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/snake.dir/flags.make

app/CMakeFiles/snake.dir/main.cpp.o: app/CMakeFiles/snake.dir/flags.make
app/CMakeFiles/snake.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anetreba/Desktop/MarathonCpp/Race00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/snake.dir/main.cpp.o"
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake.dir/main.cpp.o -c /Users/anetreba/Desktop/MarathonCpp/Race00/app/main.cpp

app/CMakeFiles/snake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake.dir/main.cpp.i"
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anetreba/Desktop/MarathonCpp/Race00/app/main.cpp > CMakeFiles/snake.dir/main.cpp.i

app/CMakeFiles/snake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake.dir/main.cpp.s"
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anetreba/Desktop/MarathonCpp/Race00/app/main.cpp -o CMakeFiles/snake.dir/main.cpp.s

# Object files for target snake
snake_OBJECTS = \
"CMakeFiles/snake.dir/main.cpp.o"

# External object files for target snake
snake_EXTERNAL_OBJECTS =

../snake: app/CMakeFiles/snake.dir/main.cpp.o
../snake: app/CMakeFiles/snake.dir/build.make
../snake: app/src/libsrc.a
../snake: app/CMakeFiles/snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anetreba/Desktop/MarathonCpp/Race00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../snake"
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/snake.dir/build: ../snake

.PHONY : app/CMakeFiles/snake.dir/build

app/CMakeFiles/snake.dir/clean:
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build/app && $(CMAKE_COMMAND) -P CMakeFiles/snake.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/snake.dir/clean

app/CMakeFiles/snake.dir/depend:
	cd /Users/anetreba/Desktop/MarathonCpp/Race00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anetreba/Desktop/MarathonCpp/Race00 /Users/anetreba/Desktop/MarathonCpp/Race00/app /Users/anetreba/Desktop/MarathonCpp/Race00/build /Users/anetreba/Desktop/MarathonCpp/Race00/build/app /Users/anetreba/Desktop/MarathonCpp/Race00/build/app/CMakeFiles/snake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/snake.dir/depend

