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
CMAKE_SOURCE_DIR = /Users/anetreba/Desktop/Sprint00/t05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anetreba/Desktop/Sprint00/t05/build

# Include any dependencies generated for this target.
include CMakeFiles/automaton.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/automaton.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/automaton.dir/flags.make

CMakeFiles/automaton.dir/main.cpp.o: CMakeFiles/automaton.dir/flags.make
CMakeFiles/automaton.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anetreba/Desktop/Sprint00/t05/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/automaton.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/automaton.dir/main.cpp.o -c /Users/anetreba/Desktop/Sprint00/t05/main.cpp

CMakeFiles/automaton.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/automaton.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anetreba/Desktop/Sprint00/t05/main.cpp > CMakeFiles/automaton.dir/main.cpp.i

CMakeFiles/automaton.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/automaton.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anetreba/Desktop/Sprint00/t05/main.cpp -o CMakeFiles/automaton.dir/main.cpp.s

# Object files for target automaton
automaton_OBJECTS = \
"CMakeFiles/automaton.dir/main.cpp.o"

# External object files for target automaton
automaton_EXTERNAL_OBJECTS =

../automaton: CMakeFiles/automaton.dir/main.cpp.o
../automaton: CMakeFiles/automaton.dir/build.make
../automaton: CMakeFiles/automaton.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anetreba/Desktop/Sprint00/t05/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../automaton"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/automaton.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/automaton.dir/build: ../automaton

.PHONY : CMakeFiles/automaton.dir/build

CMakeFiles/automaton.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/automaton.dir/cmake_clean.cmake
.PHONY : CMakeFiles/automaton.dir/clean

CMakeFiles/automaton.dir/depend:
	cd /Users/anetreba/Desktop/Sprint00/t05/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anetreba/Desktop/Sprint00/t05 /Users/anetreba/Desktop/Sprint00/t05 /Users/anetreba/Desktop/Sprint00/t05/build /Users/anetreba/Desktop/Sprint00/t05/build /Users/anetreba/Desktop/Sprint00/t05/build/CMakeFiles/automaton.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/automaton.dir/depend

